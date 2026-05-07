// Class: AdaptorJoustMatchLoadingScreenConfig


/* AdaptorJoustMatchLoadingScreenConfig::AdaptorJoustMatchLoadingScreenConfig() */

void __thiscall
AdaptorJoustMatchLoadingScreenConfig::AdaptorJoustMatchLoadingScreenConfig
          (AdaptorJoustMatchLoadingScreenConfig *this)

{
  FUN_05476574();
  FUN_05476574(this + 8);
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  this[0x18] = (AdaptorJoustMatchLoadingScreenConfig)0x1;
  return;
}


/* AdaptorJoustMatchLoadingScreenConfig::TEMPNAMEPLACEHOLDERVALUE(AdaptorJoustMatchLoadingScreenConfig
   const&) */

AdaptorJoustMatchLoadingScreenConfig * __thiscall
AdaptorJoustMatchLoadingScreenConfig::operator=
          (AdaptorJoustMatchLoadingScreenConfig *this,AdaptorJoustMatchLoadingScreenConfig *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  thunk_FUN_05477b9c();
  thunk_FUN_05477b9c(this + 8,param_1 + 8);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  this[0x18] = param_1[0x18];
  *(undefined4 *)(this + 0x10) = uVar1;
  *(undefined4 *)(this + 0x14) = uVar2;
  return this;
}

