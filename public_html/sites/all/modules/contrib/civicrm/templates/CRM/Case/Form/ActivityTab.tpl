{*
 +--------------------------------------------------------------------+
 | CiviCRM version 4.6                                                |
 +--------------------------------------------------------------------+
 | Copyright CiviCRM LLC (c) 2004-2015                                |
 +--------------------------------------------------------------------+
 | This file is a part of CiviCRM.                                    |
 |                                                                    |
 | CiviCRM is free software; you can copy, modify, and distribute it  |
 | under the terms of the GNU Affero General Public License           |
 | Version 3, 19 November 2007 and the CiviCRM Licensing Exception.   |
 |                                                                    |
 | CiviCRM is distributed in the hope that it will be useful, but     |
 | WITHOUT ANY WARRANTY; without even the implied warranty of         |
 | MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.               |
 | See the GNU Affero General Public License for more details.        |
 |                                                                    |
 | You should have received a copy of the GNU Affero General Public   |
 | License and the CiviCRM Licensing Exception along                  |
 | with this program; if not, contact CiviCRM LLC                     |
 | at info[AT]civicrm[DOT]org. If you have questions about the        |
 | GNU Affero General Public License or the licensing of CiviCRM,     |
 | see the CiviCRM license FAQ at http://civicrm.org/licensing        |
 +--------------------------------------------------------------------+
*}
{*this template is used for activity accordion*}
<div class="crm-accordion-wrapper crm-case_activities-accordion  crm-case-activities-block">
  <div class="crm-accordion-header">
    {ts}Activities{/ts}
  </div>
  <div id="activities" class="crm-accordion-body">
    <div class="crm-accordion-wrapper crm-accordion-inner crm-search_filters-accordion collapsed">
      <div class="crm-accordion-header">
        {ts}Search Filters{/ts}
      </div><!-- /.crm-accordion-header -->
      <div class="crm-accordion-body">
        <table class="no-border form-layout-compressed" id="searchOptions">
          <tr>
            <td class="crm-case-caseview-form-block-repoter_id"colspan="2"><label for="reporter_id">{ts}Reporter/Role{/ts}</label><br />
              {$form.reporter_id.html|crmAddClass:twenty}
            </td>
            <td class="crm-case-caseview-form-block-status_id"><label for="status_id">{$form.status_id.label}</label><br />
              {$form.status_id.html}
            </td>
            <td style="vertical-align: bottom;">
              {assign var=caseid value=$caseID}
              <span class="crm-button crm-icon-button">
                <span class="crm-button-icon ui-icon-check"></span>
                <input class="crm-form-submit default" name="_qf_Basic_refresh" value="{ts}Search{/ts}" type="button" data-case-id="{$caseid}" />
              </span>
            </td>
          </tr>
          <tr>
            <td class="crm-case-caseview-form-block-activity_date_low">
        {assign var=activitylow  value=activity_date_low_$caseID}
              {$form.$activitylow.label}<br />
            {include file="CRM/common/jcalendar.tpl" elementName=$activitylow}
            </td>
            <td class="crm-case-caseview-form-block-activity_date_high">
        {assign var=activityhigh  value=activity_date_high_$caseID}
              {$form.$activityhigh.label}<br />
            {include file="CRM/common/jcalendar.tpl" elementName=$activityhigh}
            </td>
            <td class="crm-case-caseview-form-block-activity_type_filter_id">
              {$form.activity_type_filter_id.label}<br />
              {$form.activity_type_filter_id.html}
            </td>
          </tr>
          {if $form.activity_deleted}
            <tr class="crm-case-caseview-form-block-activity_deleted">
              <td>
                {$form.activity_deleted.html}{$form.activity_deleted.label}
              </td>
            </tr>
          {/if}
        </table>
      </div><!-- /.crm-accordion-body -->
    </div><!-- /.crm-accordion-wrapper -->

    <table id=case_id_{$caseid}  class="nestedActivitySelector">
      <thead><tr>
        <th class='crm-case-activities-date'>{ts}Date{/ts}</th>
        <th class='crm-case-activities-subject'>{ts}Subject{/ts}</th>
        <th class='crm-case-activities-type'>{ts}Type{/ts}</th>
        <th class='crm-case-activities-with'>{ts}With{/ts}</th>
        <th class='crm-case-activities-assignee'>{ts}Reporter / Assignee{/ts}</th>
        <th class='crm-case-activities-status'>{ts}Status{/ts}</th>
        <th class='crm-case-activities-status' id="nosort">&nbsp;</th>
        <th class='hiddenElement'>&nbsp;</th>
      </tr></thead>
    </table>

  </div><!-- /.crm-accordion-body -->
</div><!-- /.crm-accordion-wrapper -->

{literal}
<script type="text/javascript">
CRM.$(function($) {
  var CaseId = {/literal}{$caseID}{literal};
  buildCaseActivities(false);
  $('input.crm-form-submit[data-case-id=' + CaseId + ']').click(buildCaseActivities);

  function buildCaseActivities(filterSearch) {
    if (filterSearch) {
      oTable.fnDestroy();
    }
    var count = 0;
    var columns = '';
    var sourceUrl = {/literal}"{crmURL p='civicrm/ajax/activity' h=0 q='snippet=4&caseID='}"{literal}+CaseId;
    sourceUrl = sourceUrl + '&cid={/literal}{$contactID}{literal}';
    sourceUrl = sourceUrl + '&userID={/literal}{$userID}{literal}';

    $('#case_id_'+CaseId+' th').each(function( ) {
      if ($(this).attr('id') != 'nosort') {
        columns += '{"sClass": "' + $(this).attr('class') +'"},';
      }
      else {
        columns += '{ "bSortable": false },';
      }
      count++;
    });

    columns = columns.substring(0, columns.length - 1 );
    eval('columns =[' + columns + ']');

    oTable = $('#case_id_'+CaseId).dataTable({
      "bFilter"    : false,
      "bAutoWidth" : false,
      "aaSorting"  : [],
      "aoColumns"  : columns,
      "bProcessing": true,
      "bJQueryUI": true,
      "asStripClasses" : [ "odd-row", "even-row" ],
      "sPaginationType": "full_numbers",
      "sDom"       : '<"crm-datatable-pager-top"lfp>rt<"crm-datatable-pager-bottom"ip>',
      "bServerSide": true,
      "sAjaxSource": sourceUrl,
      "iDisplayLength": 10,
      "bDestroy": true,
      "fnDrawCallback": function() {
        setSelectorClass();
        setRowIds();
        // FIXME: trigger crmLoad and crmEditable would happen automatically
        $('.crm-editable', '#case_id_'+CaseId).crmEditable();
      },
      "fnServerData": function ( sSource, aoData, fnCallback ) {

        if ( filterSearch ) {
          var activity_deleted = 0;
          if ( $("#activity_deleted_"+CaseId+":checked").val() == 1 ) {
            activity_deleted = 1;
          }
          aoData.push(
            {name:'status_id', value: $("select#status_id_"+CaseId).val()},
            {name:'reporter_id', value: $("select#reporter_id_"+CaseId).val()},
            {name:'activity_type_id', value: $("select#activity_type_filter_id_"+CaseId).val()},
            {name:'activity_date_low', value: $("#activity_date_low_"+CaseId).val()},
            {name:'activity_date_high', value: $("#activity_date_high_"+CaseId).val() },
            {name:'activity_deleted', value: activity_deleted }
          );
        }
        $.ajax( {
          "dataType": 'json',
          "type": "POST",
          "url": sSource,
          "data": aoData,
          "success": fnCallback
        } );
      }
    });
  }

  function setRowIds() {
    $("#case_id_"+CaseId+" tbody tr").each(function() {
      var link, id;
      link = $('a.action-item', this).attr('href');
      if (link) {
        id = link.match(/&id=(\d+)/);
      }
      if (id) {
        $(this)
          .addClass('crm-entity')
          .data('entity', 'activity')
          .data('id', id[1]);
      }
    });
  }

  function setSelectorClass() {
    $("#case_id_"+CaseId+" td:last-child").each(function() {
      $(this).parent().addClass($(this).text());
    });
  }
});
</script>
{/literal}
