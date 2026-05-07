// Class: ArcadePropertySheetHelpers::UnlockSource


/* ArcadePropertySheetHelpers::UnlockSource::UnlockSource(ArcadePropertySheetHelpers::UnlockSource
   const&) */

void __thiscall
ArcadePropertySheetHelpers::UnlockSource::UnlockSource(UnlockSource *this,UnlockSource *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  FUN_05475d88(this + 8,param_1 + 8);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  return;
}


/* ArcadePropertySheetHelpers::UnlockSource::UnlockSource(ArcadePropertySheetHelpers::UnlockSource&&)
    */

void __thiscall
ArcadePropertySheetHelpers::UnlockSource::UnlockSource(UnlockSource *this,UnlockSource *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  FUN_05474148(this + 8,param_1 + 8);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  return;
}


/* ArcadePropertySheetHelpers::UnlockSource::UnlockSource(ArcadePropertySheetHelpers::UnlockSourceType,
   std::string const&, int) */

void __thiscall
ArcadePropertySheetHelpers::UnlockSource::UnlockSource
          (UnlockSource *this,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  *(undefined4 *)this = param_2;
  FUN_05475d88(this + 8,param_3);
  *(undefined4 *)(this + 0x10) = param_4;
  return;
}

