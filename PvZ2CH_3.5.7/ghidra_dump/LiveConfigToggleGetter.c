// Class: LiveConfigToggleGetter


/* LiveConfigToggleGetter::GetInstance() */

undefined * LiveConfigToggleGetter::GetInstance(void)

{
  int iVar1;
  
  if (((DAT_06b70810 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_06b70810), iVar1 != 0)) {
    __cxa_guard_release(&DAT_06b70810);
    __cxa_atexit(nop,&DAT_06a88ce0,&DAT_06a88000);
    return &DAT_06a88ce0;
  }
  return &DAT_06a88ce0;
}


/* LiveConfigToggleGetter::GetLiveConfigToggles() */

void __thiscall LiveConfigToggleGetter::GetLiveConfigToggles(LiveConfigToggleGetter *this)

{
  long lVar1;
  vector<Toggle,std::allocator<Toggle>> *in_x8;
  
  lVar1 = LiveConfig::Get();
  std::vector<Toggle,std::allocator<Toggle>>::vector(in_x8,(vector *)(lVar1 + 0x18));
  return;
}

