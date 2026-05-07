// Class: AdaptorNewPVPEntryScreenConfig


/* AdaptorNewPVPEntryScreenConfig::AdaptorNewPVPEntryScreenConfig() */

void __thiscall
AdaptorNewPVPEntryScreenConfig::AdaptorNewPVPEntryScreenConfig(AdaptorNewPVPEntryScreenConfig *this)

{
  FUN_05476574();
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  return;
}


/* AdaptorNewPVPEntryScreenConfig::TEMPNAMEPLACEHOLDERVALUE(AdaptorNewPVPEntryScreenConfig const&)
    */

AdaptorNewPVPEntryScreenConfig * __thiscall
AdaptorNewPVPEntryScreenConfig::operator=
          (AdaptorNewPVPEntryScreenConfig *this,AdaptorNewPVPEntryScreenConfig *param_1)

{
  undefined4 uVar1;
  
  thunk_FUN_05477b9c();
  uVar1 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 8) = uVar1;
  return this;
}

