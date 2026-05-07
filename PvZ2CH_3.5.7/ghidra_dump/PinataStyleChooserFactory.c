// Class: PinataStyleChooserFactory


/* PinataStyleChooserFactory::PinataStyleChooserFactory() */

void __thiscall
PinataStyleChooserFactory::PinataStyleChooserFactory(PinataStyleChooserFactory *this)

{
  *(undefined ***)this = &PTR_nop_06925110;
  PinataStyleChooser::PinataStyleChooser((PinataStyleChooser *)(this + 8));
  return;
}


/* PinataStyleChooserFactory::GetInstance() */

undefined * PinataStyleChooserFactory::GetInstance(void)

{
  int iVar1;
  
  if (((DAT_06b74420 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_06b74420), iVar1 != 0)) {
    PinataStyleChooserFactory((PinataStyleChooserFactory *)&DAT_06b743e0);
    __cxa_guard_release(&DAT_06b74420);
    __cxa_atexit(nop,&DAT_06b743e0,&DAT_06a88000);
    return &DAT_06b743e0;
  }
  return &DAT_06b743e0;
}

