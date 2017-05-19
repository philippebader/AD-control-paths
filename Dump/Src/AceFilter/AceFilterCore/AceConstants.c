/******************************************************************************\
\******************************************************************************/


/* --- INCLUDES ------------------------------------------------------------- */
#include "AceConstants.h"

/* --- PRIVATE VARIABLES ---------------------------------------------------- */
/* --- PUBLIC VARIABLES ----------------------------------------------------- */
// This table must be consistent with the "ACE_RELATIONS" enum (same count, same order)
const LPTSTR gc_AceRelations[ACE_REL_COUNT] = {
	STR(GEN_RIGHT_ALL),
	STR(GEN_RIGHT_WRITE),
	STR(GEN_RIGHT_READ),

	STR(STAND_RIGHT_WRITE_DAC),
	STR(STAND_RIGHT_WRITE_OWNER),

	STR(EXT_RIGHT_ALL),
	STR(EXT_RIGHT_FORCE_CHANGE_PWD),
	STR(EXT_RIGHT_CERTIFICATE_ENROLLMENT),
	STR(EXT_RIGHT_DOMAIN_ADMINISTER_SERVER),
	STR(EXT_RIGHT_REPLICATION_GET_CHANGES_ALL),
	STR(EXT_RIGHT_RECEIVE_AS),
	STR(EXT_RIGHT_SEND_AS),
	STR(EXT_RIGHT_CREATE_INBOUND_FOREST_TRUST),
	STR(EXT_RIGHT_MIGRATE_SID_HISTORY),
	STR(EXT_RIGHT_ADM_PWD),

    STR(VAL_WRITE_ALL),
    STR(VAL_WRITE_SELF_MEMBERSHIP),

    STR(WRITE_PROP_ALL),
    STR(WRITE_PROP_MEMBER),
    STR(WRITE_PROP_X509CERT),
    STR(WRITE_PROP_GPLINK),
    STR(WRITE_PROP_GPC_FILE_SYS_PATH),
    STR(WRITE_PROPSET_MEMBERSHIP),
    STR(WRITE_PROPSET_PERSONALINFO),

    STR(FS_RIGHT_WRITEDATA_ADDFILE),
    STR(FS_RIGHT_APPENDDATA_ADDSUBDIR),
	STR(EXCH_CHANGEPERMISSION),
	STR(EXCH_CHANGEOWNER),
	STR(EXCH_FULLACCESS),
	STR(EXCH_EXTERNALACCOUNT),
};

static_assert(ARRAY_COUNT(gc_AceRelations) == ACE_REL_COUNT, "inconsistent number of relations in gcs_AceRelations");

const NUMERIC_CONSTANT gc_AceTypeValues[ACE_TYPES_VALUES_COUNT] = {
    { _T("ACCESS_ALLOWED"), ACCESS_ALLOWED_ACE_TYPE },
    { _T("ACCESS_ALLOWED_CALLBACK"), ACCESS_ALLOWED_CALLBACK_ACE_TYPE },
    { _T("ACCESS_ALLOWED_CALLBACK_OBJECT"), ACCESS_ALLOWED_CALLBACK_OBJECT_ACE_TYPE },
    { _T("ACCESS_ALLOWED_COMPOUND"), ACCESS_ALLOWED_COMPOUND_ACE_TYPE },
    { _T("ACCESS_ALLOWED_OBJECT"), ACCESS_ALLOWED_OBJECT_ACE_TYPE },
    { _T("ACCESS_DENIED"), ACCESS_DENIED_ACE_TYPE },
    { _T("ACCESS_DENIED_CALLBACK"), ACCESS_DENIED_CALLBACK_ACE_TYPE },
    { _T("ACCESS_DENIED_CALLBACK_OBJECT"), ACCESS_DENIED_CALLBACK_OBJECT_ACE_TYPE },
    { _T("ACCESS_DENIED_OBJECT"), ACCESS_DENIED_OBJECT_ACE_TYPE },
    { _T("ACCESS_MAX_MS"), ACCESS_MAX_MS_ACE_TYPE },
    { _T("ACCESS_MAX_MS_V2"), ACCESS_MAX_MS_V2_ACE_TYPE },
    { _T("ACCESS_MAX_MS_V3"), ACCESS_MAX_MS_V3_ACE_TYPE },
    { _T("ACCESS_MAX_MS_V4"), ACCESS_MAX_MS_V4_ACE_TYPE },
    { _T("ACCESS_MAX_MS_OBJECT"), ACCESS_MAX_MS_OBJECT_ACE_TYPE },
    { _T("ACCESS_MIN_MS"), ACCESS_MIN_MS_ACE_TYPE },
    { _T("ACCESS_MIN_MS_OBJECT"), ACCESS_MIN_MS_OBJECT_ACE_TYPE },
    { _T("SYSTEM_ALARM"), SYSTEM_ALARM_ACE_TYPE },
    { _T("SYSTEM_ALARM_CALLBACK"), SYSTEM_ALARM_CALLBACK_ACE_TYPE },
    { _T("SYSTEM_ALARM_CALLBACK_OBJECT"), SYSTEM_ALARM_CALLBACK_OBJECT_ACE_TYPE },
    { _T("SYSTEM_ALARM_OBJECT"), SYSTEM_ALARM_OBJECT_ACE_TYPE },
    { _T("SYSTEM_AUDIT"), SYSTEM_AUDIT_ACE_TYPE },
    { _T("SYSTEM_AUDIT_CALLBACK"), SYSTEM_AUDIT_CALLBACK_ACE_TYPE },
    { _T("SYSTEM_AUDIT_CALLBACK_OBJECT_ACE"), SYSTEM_AUDIT_CALLBACK_OBJECT_ACE_TYPE },
    { _T("SYSTEM_AUDIT_OBJECT_ACE"), SYSTEM_AUDIT_OBJECT_ACE_TYPE },
    { _T("SYSTEM_MANDATORY_LABEL_ACE"), SYSTEM_MANDATORY_LABEL_ACE_TYPE },
};

const NUMERIC_CONSTANT gc_AceFlagsValues[ ACE_FLAGS_VALUES_COUNT ] = {
    { _T("OBJECT_INHERIT"), OBJECT_INHERIT_ACE },
    { _T("CONTAINER_INHERIT"), CONTAINER_INHERIT_ACE },
    { _T("NO_PROPAGATE_INHERIT"), NO_PROPAGATE_INHERIT_ACE },
    { _T("INHERIT_ONLY"), INHERIT_ONLY_ACE },
    { _T("INHERITED"), INHERITED_ACE },
    { _T("FAILED_ACCESS"), FAILED_ACCESS_ACE_FLAG },
    { _T("SUCCESSFUL_ACCESS"), SUCCESSFUL_ACCESS_ACE_FLAG }
};

const NUMERIC_CONSTANT gc_AceGenericAccessMaskValues[ACE_GENERIC_ACCESSMASK_VALUES_COUNT] = {
    { _T("GENERIC_READ"), GENERIC_READ },
    { _T("GENERIC_WRITE"), GENERIC_WRITE },
    { _T("GENERIC_EXECUTE"), GENERIC_EXECUTE },
    { _T("GENERIC_ALL"), GENERIC_ALL }
};

const NUMERIC_CONSTANT gc_AceStandardAccessMaskValues[ACE_STANDARD_ACCESSMASK_VALUES_COUNT] = {
    { _T("DELETE"), DELETE },
    { _T("READ_CONTROL"), READ_CONTROL },
    { _T("WRITE_DAC"), WRITE_DAC },
    { _T("WRITE_OWNER"), WRITE_OWNER },
    { _T("SYNCHRONIZE"), SYNCHRONIZE },
    { _T("ACCESS_SYSTEM_SECURITY"), ACCESS_SYSTEM_SECURITY } // Not a standard right, but meh...
};

const NUMERIC_CONSTANT gc_AceSpecificAdAccessMaskValues[ACE_AD_ACCESSMASK_VALUES_COUNT] = {
    { _T("DS_CREATE_CHILD"), ADS_RIGHT_DS_CREATE_CHILD },
    { _T("DS_DELETE_CHILD"), ADS_RIGHT_DS_DELETE_CHILD },
    { _T("ACTRL_DS_LIST"), ADS_RIGHT_ACTRL_DS_LIST },
    { _T("RIGHT_DS_SELF"), ADS_RIGHT_DS_SELF },
    { _T("DS_READ_PROP"), ADS_RIGHT_DS_READ_PROP },
    { _T("DS_WRITE_PROP"), ADS_RIGHT_DS_WRITE_PROP },
    { _T("DS_DELETE_TREE"), ADS_RIGHT_DS_DELETE_TREE },
    { _T("DS_LIST_OBJECT"), ADS_RIGHT_DS_LIST_OBJECT },
    { _T("DS_CONTROL_ACCESS"), ADS_RIGHT_DS_CONTROL_ACCESS }
};

const NUMERIC_CONSTANT gc_AceSpecificFsAccessMaskValues[ACE_FS_ACCESSMASK_VALUES_COUNT] = {
    { _T("FILE_READDATA_LISTDIR"), FILE_READ_DATA },
    { _T("FILE_WRITEDATA_ADDFILE"), FILE_WRITE_DATA },
    { _T("FILE_APPENDDATA_ADDSUBDIR"), FILE_APPEND_DATA },
    { _T("FILE_READ_EA"), FILE_READ_EA },
    { _T("FILE_WRITE_EA"), FILE_WRITE_EA },
    { _T("FILE_DELETE_CHILD"), FILE_DELETE_CHILD },
    { _T("FILE_READ_ATTRIBUTES"), FILE_READ_ATTRIBUTES },
    { _T("FILE_WRITE_ATTRIBUTES"), FILE_WRITE_ATTRIBUTES }
};

const NUMERIC_CONSTANT gc_AceObjectFlagsValues[ACE_OBJECT_FLAGS_VALUES_COUNT] = {
    { _T("OBJECT_TYPE_PRESENT"), ACE_OBJECT_TYPE_PRESENT },
    { _T("INHERITED_OBJECT_TYPE_PRESENT"), ACE_INHERITED_OBJECT_TYPE_PRESENT },
};

/* --- PRIVATE FUNCTIONS ---------------------------------------------------- */
/* --- PUBLIC FUNCTIONS ----------------------------------------------------- */
