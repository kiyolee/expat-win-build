/* internal_rename.h */
/* Rename exported internal APIs with consistent prefix */

#if ! defined(INTERNAL_RENAME_H)
#  define INTERNAL_RENAME_H 1

#define _EXPAT_INTERNAL(n) _expat_internal_##n

#define _INTERNAL_trim_to_complete_utf8_characters _EXPAT_INTERNAL(trim_to_complete_utf8_characters)
#define testingAccountingGetCountBytesDirect _EXPAT_INTERNAL(testingAccountingGetCountBytesDirect)
#define testingAccountingGetCountBytesIndirect _EXPAT_INTERNAL(testingAccountingGetCountBytesIndirect)
#define unsignedCharToPrintable _EXPAT_INTERNAL(unsignedCharToPrintable)
#define g_reparseDeferralEnabledDefault _EXPAT_INTERNAL(reparseDeferralEnabledDefault)
#define xmlSetHashSalt _EXPAT_INTERNAL(xmlSetHashSalt)

#define expat_malloc _EXPAT_INTERNAL(malloc)
#define expat_free _EXPAT_INTERNAL(free)
#define expat_realloc _EXPAT_INTERNAL(realloc)

#define testingResetBytesScanned _EXPAT_INTERNAL(testingResetBytesScanned)
#define testingGetBytesScanned _EXPAT_INTERNAL(testingGetBytesScanned)

#define isPredefinedEntityName _EXPAT_INTERNAL(isPredefinedEntityName)
#define isCDataCommentOrPIStart _EXPAT_INTERNAL(isCDataCommentOrPIStart)
#define scanEntityText _EXPAT_INTERNAL(scanEntityText)

#define keyeq _EXPAT_INTERNAL(hashTableKeyEq)
#define keylen _EXPAT_INTERNAL(hashTableKeyLen)
#define lookupWithLength _EXPAT_INTERNAL(hashTableLookupWithLength)
#define lookup _EXPAT_INTERNAL(hasTableLookup)
#define hashTableClear _EXPAT_INTERNAL(hashTableClear)
#define hashTableDestroy _EXPAT_INTERNAL(hashTableDestroy)
#define hashTableInit _EXPAT_INTERNAL(hashTableInit)
#define hashTableIterInit _EXPAT_INTERNAL(hashTableIterInit)
#define hashTableIterNext _EXPAT_INTERNAL(hashTableIterNext)

#endif // not defined INTERNAL_RENAME_H
