<?php
/*
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
*/
/**
 * @package CRM
 * @copyright CiviCRM LLC (c) 2004-2015
 *
 * Generated from xml/schema/CRM/Case/Case.xml
 * DO NOT EDIT.  Generated by CRM_Core_CodeGen
 */
require_once 'CRM/Core/DAO.php';
require_once 'CRM/Utils/Type.php';
class CRM_Case_DAO_Case extends CRM_Core_DAO
{
  /**
   * static instance to hold the table name
   *
   * @var string
   */
  static $_tableName = 'civicrm_case';
  /**
   * static instance to hold the field values
   *
   * @var array
   */
  static $_fields = null;
  /**
   * static instance to hold the keys used in $_fields for each field.
   *
   * @var array
   */
  static $_fieldKeys = null;
  /**
   * static instance to hold the FK relationships
   *
   * @var string
   */
  static $_links = null;
  /**
   * static instance to hold the values that can
   * be imported
   *
   * @var array
   */
  static $_import = null;
  /**
   * static instance to hold the values that can
   * be exported
   *
   * @var array
   */
  static $_export = null;
  /**
   * static value to see if we should log any modifications to
   * this table in the civicrm_log table
   *
   * @var boolean
   */
  static $_log = true;
  /**
   * Unique Case ID
   *
   * @var int unsigned
   */
  public $id;
  /**
   * FK to civicrm_case_type.id
   *
   * @var int unsigned
   */
  public $case_type_id;
  /**
   * Short name of the case.
   *
   * @var string
   */
  public $subject;
  /**
   * Date on which given case starts.
   *
   * @var date
   */
  public $start_date;
  /**
   * Date on which given case ends.
   *
   * @var date
   */
  public $end_date;
  /**
   * Details about the meeting (agenda, notes, etc).
   *
   * @var text
   */
  public $details;
  /**
   * Id of case status.
   *
   * @var int unsigned
   */
  public $status_id;
  /**
   *
   * @var boolean
   */
  public $is_deleted;
  /**
   * class constructor
   *
   * @return civicrm_case
   */
  function __construct()
  {
    $this->__table = 'civicrm_case';
    parent::__construct();
  }
  /**
   * Returns foreign keys and entity references
   *
   * @return array
   *   [CRM_Core_Reference_Interface]
   */
  static function getReferenceColumns()
  {
    if (!self::$_links) {
      self::$_links = static ::createReferenceColumns(__CLASS__);
      self::$_links[] = new CRM_Core_Reference_Basic(self::getTableName() , 'case_type_id', 'civicrm_case_type', 'id');
    }
    return self::$_links;
  }
  /**
   * Returns all the column names of this table
   *
   * @return array
   */
  static function &fields()
  {
    if (!(self::$_fields)) {
      self::$_fields = array(
        'case_id' => array(
          'name' => 'id',
          'type' => CRM_Utils_Type::T_INT,
          'title' => ts('Case ID') ,
          'description' => 'Unique Case ID',
          'required' => true,
          'import' => true,
          'where' => 'civicrm_case.id',
          'headerPattern' => '',
          'dataPattern' => '',
          'export' => true,
        ) ,
        'case_type_id' => array(
          'name' => 'case_type_id',
          'type' => CRM_Utils_Type::T_INT,
          'title' => ts('Case Type') ,
          'description' => 'FK to civicrm_case_type.id',
          'import' => true,
          'where' => 'civicrm_case.case_type_id',
          'headerPattern' => '',
          'dataPattern' => '',
          'export' => false,
          'FKClassName' => 'CRM_Case_DAO_CaseType',
          'html' => array(
            'type' => 'Select',
          ) ,
          'pseudoconstant' => array(
            'table' => 'civicrm_case_type',
            'keyColumn' => 'id',
            'labelColumn' => 'title',
          )
        ) ,
        'case_subject' => array(
          'name' => 'subject',
          'type' => CRM_Utils_Type::T_STRING,
          'title' => ts('Case Subject') ,
          'description' => 'Short name of the case.',
          'maxlength' => 128,
          'size' => CRM_Utils_Type::HUGE,
          'import' => true,
          'where' => 'civicrm_case.subject',
          'headerPattern' => '',
          'dataPattern' => '',
          'export' => true,
          'html' => array(
            'type' => 'Text',
          ) ,
        ) ,
        'case_start_date' => array(
          'name' => 'start_date',
          'type' => CRM_Utils_Type::T_DATE,
          'title' => ts('Case Start Date') ,
          'description' => 'Date on which given case starts.',
          'import' => true,
          'where' => 'civicrm_case.start_date',
          'headerPattern' => '',
          'dataPattern' => '',
          'export' => true,
          'html' => array(
            'type' => 'Select Date',
          ) ,
        ) ,
        'case_end_date' => array(
          'name' => 'end_date',
          'type' => CRM_Utils_Type::T_DATE,
          'title' => ts('Case End Date') ,
          'description' => 'Date on which given case ends.',
          'import' => true,
          'where' => 'civicrm_case.end_date',
          'headerPattern' => '',
          'dataPattern' => '',
          'export' => true,
          'html' => array(
            'type' => 'Select Date',
          ) ,
        ) ,
        'details' => array(
          'name' => 'details',
          'type' => CRM_Utils_Type::T_TEXT,
          'title' => ts('Details') ,
          'description' => 'Details about the meeting (agenda, notes, etc).',
          'rows' => 8,
          'cols' => 60,
          'html' => array(
            'type' => 'TextArea',
          ) ,
        ) ,
        'case_status_id' => array(
          'name' => 'status_id',
          'type' => CRM_Utils_Type::T_INT,
          'title' => ts('Case Status') ,
          'description' => 'Id of case status.',
          'required' => true,
          'import' => true,
          'where' => 'civicrm_case.status_id',
          'headerPattern' => '',
          'dataPattern' => '',
          'export' => false,
          'html' => array(
            'type' => 'Select',
          ) ,
          'pseudoconstant' => array(
            'optionGroupName' => 'case_status',
            'optionEditPath' => 'civicrm/admin/options/case_status',
          )
        ) ,
        'case_deleted' => array(
          'name' => 'is_deleted',
          'type' => CRM_Utils_Type::T_BOOLEAN,
          'title' => ts('Case is in the Trash') ,
          'import' => true,
          'where' => 'civicrm_case.is_deleted',
          'headerPattern' => '',
          'dataPattern' => '',
          'export' => true,
        ) ,
      );
    }
    return self::$_fields;
  }
  /**
   * Returns an array containing, for each field, the arary key used for that
   * field in self::$_fields.
   *
   * @return array
   */
  static function &fieldKeys()
  {
    if (!(self::$_fieldKeys)) {
      self::$_fieldKeys = array(
        'id' => 'case_id',
        'case_type_id' => 'case_type_id',
        'subject' => 'case_subject',
        'start_date' => 'case_start_date',
        'end_date' => 'case_end_date',
        'details' => 'details',
        'status_id' => 'case_status_id',
        'is_deleted' => 'case_deleted',
      );
    }
    return self::$_fieldKeys;
  }
  /**
   * Returns the names of this table
   *
   * @return string
   */
  static function getTableName()
  {
    return self::$_tableName;
  }
  /**
   * Returns if this table needs to be logged
   *
   * @return boolean
   */
  function getLog()
  {
    return self::$_log;
  }
  /**
   * Returns the list of fields that can be imported
   *
   * @param bool $prefix
   *
   * @return array
   */
  static function &import($prefix = false)
  {
    if (!(self::$_import)) {
      self::$_import = array();
      $fields = self::fields();
      foreach($fields as $name => $field) {
        if (CRM_Utils_Array::value('import', $field)) {
          if ($prefix) {
            self::$_import['case'] = & $fields[$name];
          } else {
            self::$_import[$name] = & $fields[$name];
          }
        }
      }
    }
    return self::$_import;
  }
  /**
   * Returns the list of fields that can be exported
   *
   * @param bool $prefix
   *
   * @return array
   */
  static function &export($prefix = false)
  {
    if (!(self::$_export)) {
      self::$_export = array();
      $fields = self::fields();
      foreach($fields as $name => $field) {
        if (CRM_Utils_Array::value('export', $field)) {
          if ($prefix) {
            self::$_export['case'] = & $fields[$name];
          } else {
            self::$_export[$name] = & $fields[$name];
          }
        }
      }
    }
    return self::$_export;
  }
}
