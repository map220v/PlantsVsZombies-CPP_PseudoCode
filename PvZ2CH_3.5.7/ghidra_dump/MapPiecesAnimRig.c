// Class: MapPiecesAnimRig


/* MapPiecesAnimRig::Clear() */

void __thiscall MapPiecesAnimRig::Clear(MapPiecesAnimRig *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 8);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1);
    *(undefined8 *)(this + 8) = 0;
  }
  return;
}


/* MapPiecesAnimRig::MapPiecesAnimRig() */

void __thiscall MapPiecesAnimRig::MapPiecesAnimRig(MapPiecesAnimRig *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined8 *)(this + 8) = 0;
  Sexy::Insets::Insets((Insets *)(this + 0x10));
  return;
}


/* MapPiecesAnimRig::GetAnimRect() */

void MapPiecesAnimRig::GetAnimRect(void)

{
  undefined8 uVar1;
  long in_x0;
  long lVar2;
  Insets *in_x8;
  
  Sexy::Insets::Insets(in_x8);
  if ((*(UIWidget **)(in_x0 + 8) != (UIWidget *)0x0) &&
     (lVar2 = UIWidget::GetAtlasImage(*(UIWidget **)(in_x0 + 8)), lVar2 != 0)) {
    lVar2 = UIWidget::GetAtlasImage(*(UIWidget **)(in_x0 + 8));
    lVar2 = FUN_04aa9e18(*(undefined8 *)(lVar2 + 0x20));
    if (lVar2 != 0) {
      uVar1 = *(undefined8 *)(lVar2 + 0x3c);
      *(undefined8 *)in_x8 = *(undefined8 *)(lVar2 + 0x34);
      *(undefined8 *)(in_x8 + 8) = uVar1;
    }
  }
  return;
}


/* MapPiecesAnimRig::MapPiecesAnimRig(MapPiecesAnimRig const&) */

void __thiscall MapPiecesAnimRig::MapPiecesAnimRig(MapPiecesAnimRig *this,MapPiecesAnimRig *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined4 *)this = uVar1;
  *(undefined4 *)(this + 4) = uVar2;
  Sexy::Insets::Insets((Insets *)(this + 0x10),(Insets *)(param_1 + 0x10));
  return;
}

