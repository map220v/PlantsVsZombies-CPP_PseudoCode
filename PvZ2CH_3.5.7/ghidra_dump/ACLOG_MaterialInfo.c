// Class: ACLOG_MaterialInfo


/* ACLOG_MaterialInfo::TEMPNAMEPLACEHOLDERVALUE(ACLOG_MaterialInfo const&) */

ACLOG_MaterialInfo * __thiscall
ACLOG_MaterialInfo::operator=(ACLOG_MaterialInfo *this,ACLOG_MaterialInfo *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  FUN_031db29c(this + 4,*(undefined4 *)(param_1 + 4));
  return this;
}


/* ACLOG_MaterialInfo::ACLOG_MaterialInfo() */

void __thiscall ACLOG_MaterialInfo::ACLOG_MaterialInfo(ACLOG_MaterialInfo *this)

{
  LawnKeyField::LawnKeyField((LawnKeyField *)(this + 4));
  *(undefined4 *)this = 0;
  LawnKeyField::operator=((LawnKeyField *)(this + 4),0);
  return;
}

