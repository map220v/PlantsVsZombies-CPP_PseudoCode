// Class: PlantSkillTipsUI


/* PlantSkillTipsUI::~PlantSkillTipsUI() */

void __thiscall PlantSkillTipsUI::~PlantSkillTipsUI(PlantSkillTipsUI *this)

{
  *(undefined ***)this = &PTR_GetClass_0683e8e0;
  FUN_05476c50(this + 0xd8);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* PlantSkillTipsUI::~PlantSkillTipsUI() */

void __thiscall PlantSkillTipsUI::~PlantSkillTipsUI(PlantSkillTipsUI *this)

{
  ~PlantSkillTipsUI(this);
  AK::FreeHook(this);
  return;
}


/* PlantSkillTipsUI::SetImage(Sexy::Image*, Sexy::Image*) */

void __thiscall PlantSkillTipsUI::SetImage(PlantSkillTipsUI *this,Image *param_1,Image *param_2)

{
  undefined4 uVar1;
  float fVar2;
  
  if (param_1 != (Image *)0x0) {
    *(Image **)(this + 0xe8) = param_1;
  }
  if (param_2 == (Image *)0x0) {
    param_2 = *(Image **)(this + 0xf0);
    if (param_2 == (Image *)0x0) {
      return;
    }
  }
  else {
    *(Image **)(this + 0xf0) = param_2;
  }
  switch(*(undefined4 *)(this + 0xe4)) {
  case 0:
  case 3:
    uVar1 = FUN_043924ac(0);
    fVar2 = (float)*(int *)(*(long *)(this + 0xe8) + 0x38);
    (**(code **)(*(long *)this + 0x198))
              (this,uVar1,uVar1,(int)(fVar2 + fVar2),
               (int)((float)*(int *)(param_2 + 0x3c) + (float)*(int *)(param_2 + 0x3c) +
                    *(float *)(this + 0xe0) * (float)*(int *)(*(long *)(this + 0xe8) + 0x3c)));
    return;
  case 1:
  case 2:
    uVar1 = FUN_043924ac(0);
    (**(code **)(*(long *)this + 0x198))
              (this,uVar1,uVar1,
               (int)((float)*(int *)(param_2 + 0x38) +
                    (float)*(int *)(*(long *)(this + 0xe8) + 0x38) * 2.0),
               (int)((float)*(int *)(*(long *)(this + 0xe8) + 0x3c) * *(float *)(this + 0xe0)));
    return;
  default:
    return;
  }
}


/* PlantSkillTipsUI::SetTips(std::wstring const&, float, Sexy::Color const&) */

void __thiscall
PlantSkillTipsUI::SetTips(PlantSkillTipsUI *this,wstring *param_1,float param_2,Color *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  thunk_FUN_05477b9c(this + 0xd8);
  uVar1 = *(undefined8 *)param_3;
  uVar2 = *(undefined8 *)(param_3 + 8);
  *(float *)(this + 0xe0) = param_2;
  *(undefined8 *)(this + 0x100) = uVar1;
  *(undefined8 *)(this + 0x108) = uVar2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSkillTipsUI::Draw(Sexy::Graphics*) */

void __thiscall PlantSkillTipsUI::Draw(PlantSkillTipsUI *this,Graphics *param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  Image *pIVar7;
  long lVar8;
  float fVar9;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets((Insets *)&local_28,0,0,0,0);
  pIVar7 = *(Image **)(this + 0xf0);
  if (pIVar7 == (Image *)0x0) goto LAB_04392bcc;
  switch(*(undefined4 *)(this + 0xe4)) {
  case 0:
    iVar2 = FUN_043924ac(0);
    Sexy::Graphics::DrawImage
              (param_1,pIVar7,
               (int)(*(float *)(this + 0xf8) +
                    ((float)*(int *)(*(long *)(this + 0xe8) + 0x38) * 2.0 -
                    (float)*(int *)(pIVar7 + 0x38)) * 0.5),
               (int)((float)iVar2 + *(float *)(this + 0xfc)));
    iVar2 = FUN_043924ac(0);
    pIVar7 = *(Image **)(this + 0xe8);
    Sexy::Graphics::DrawImage
              (param_1,pIVar7,iVar2,*(int *)(*(long *)(this + 0xf0) + 0x3c),
               (int)((float)*(int *)(pIVar7 + 0x38) + (float)*(int *)(pIVar7 + 0x38)),
               (int)((float)*(int *)(pIVar7 + 0x3c) * *(float *)(this + 0xe0)));
    iVar6 = FUN_043924ac(5);
    lVar8 = *(long *)(this + 0xe8);
    iVar2 = iVar6 + *(int *)(*(long *)(this + 0xf0) + 0x3c);
    iVar3 = FUN_043924ac(10);
    iVar5 = *(int *)(lVar8 + 0x38);
    iVar4 = *(int *)(lVar8 + 0x3c);
    break;
  case 1:
    lVar8 = *(long *)(this + 0xe8);
    iVar2 = FUN_043924ac(5);
    Sexy::Graphics::DrawImageRotated
              (param_1,pIVar7,
               (int)(*(float *)(this + 0xf8) + (float)*(int *)(lVar8 + 0x38) * 2.0 + (float)iVar2),
               (int)(*(float *)(this + 0xfc) +
                    ((float)*(int *)(lVar8 + 0x3c) * *(float *)(this + 0xe0) -
                    (float)*(int *)(pIVar7 + 0x3c)) * 0.5),-1.5700000524520874,(TRect *)0x0);
    iVar2 = FUN_043924ac(0);
    pIVar7 = *(Image **)(this + 0xe8);
    Sexy::Graphics::DrawImage
              (param_1,pIVar7,*(int *)(*(long *)(this + 0xf0) + 0x3c),iVar2,
               (int)((float)*(int *)(pIVar7 + 0x38) + (float)*(int *)(pIVar7 + 0x38)),
               (int)((float)*(int *)(pIVar7 + 0x3c) * *(float *)(this + 0xe0)));
    iVar5 = FUN_043924ac(0xf);
    iVar4 = FUN_043924ac(5);
    lVar8 = *(long *)(this + 0xe8);
    iVar2 = *(int *)(*(long *)(this + 0xf0) + 0x3c);
    iVar3 = FUN_043924ac(10);
    Sexy::Insets::Insets
              ((Insets *)&local_18,iVar5,iVar4 + iVar2,
               (int)((float)*(int *)(lVar8 + 0x38) * 2.0 - (float)iVar3),
               (int)((float)*(int *)(lVar8 + 0x3c) * *(float *)(this + 0xe0) - (float)iVar4));
    local_28 = local_18;
    uStack_20 = uStack_10;
    goto LAB_04392b90;
  case 2:
    Sexy::Graphics::DrawImageRotated
              (param_1,pIVar7,
               (int)(*(float *)(this + 0xf8) + (float)*(int *)(*(long *)(this + 0xe8) + 0x38) * 2.0)
               ,(int)(*(float *)(this + 0xfc) +
                     ((float)*(int *)(*(long *)(this + 0xe8) + 0x3c) * *(float *)(this + 0xe0) -
                     (float)*(int *)(pIVar7 + 0x3c)) * 0.5),1.5700000524520874,(TRect *)0x0);
    iVar4 = FUN_043924ac(0);
    pIVar7 = *(Image **)(this + 0xe8);
    fVar9 = *(float *)(this + 0xe0);
    iVar2 = *(int *)(pIVar7 + 0x38);
    iVar5 = *(int *)(pIVar7 + 0x3c);
    iVar3 = iVar4;
    goto LAB_04392b74;
  case 3:
    Sexy::Graphics::DrawImageRotated
              (param_1,pIVar7,
               (int)(*(float *)(this + 0xf8) +
                    ((float)*(int *)(*(long *)(this + 0xe8) + 0x38) * 2.0 -
                    (float)*(int *)(pIVar7 + 0x38)) * 0.5),
               (int)(*(float *)(this + 0xfc) +
                    *(float *)(this + 0xe0) * (float)*(int *)(*(long *)(this + 0xe8) + 0x3c)),
               3.140000104904175,(TRect *)0x0);
    iVar2 = FUN_043924ac(0);
    pIVar7 = *(Image **)(this + 0xe8);
    Sexy::Graphics::DrawImage
              (param_1,pIVar7,iVar2,iVar2,
               (int)((float)*(int *)(pIVar7 + 0x38) + (float)*(int *)(pIVar7 + 0x38)),
               (int)((float)*(int *)(pIVar7 + 0x3c) * *(float *)(this + 0xe0)));
    iVar6 = FUN_043924ac(5);
    lVar8 = *(long *)(this + 0xe8);
    iVar3 = FUN_043924ac(10);
    iVar5 = *(int *)(lVar8 + 0x38);
    iVar4 = *(int *)(lVar8 + 0x3c);
    iVar2 = iVar6;
    break;
  default:
    iVar2 = FUN_043924ac(0);
    Sexy::Graphics::DrawImage
              (param_1,pIVar7,
               (int)(*(float *)(this + 0xf8) +
                    ((float)*(int *)(*(long *)(this + 0xe8) + 0x38) * 2.0 -
                    (float)*(int *)(pIVar7 + 0x38)) * 0.5),
               (int)((float)iVar2 + *(float *)(this + 0xfc)));
    iVar3 = FUN_043924ac(0);
    pIVar7 = *(Image **)(this + 0xe8);
    fVar9 = *(float *)(this + 0xe0);
    iVar2 = *(int *)(pIVar7 + 0x38);
    iVar5 = *(int *)(pIVar7 + 0x3c);
    iVar4 = *(int *)(*(long *)(this + 0xf0) + 0x3c);
LAB_04392b74:
    Sexy::Graphics::DrawImage
              (param_1,pIVar7,iVar3,iVar4,(int)((float)iVar2 + (float)iVar2),
               (int)((float)iVar5 * fVar9));
    goto LAB_04392b90;
  }
  Sexy::Insets::Insets
            ((Insets *)&local_18,iVar6,iVar2,(int)((float)iVar5 * 2.0 - (float)iVar3),
             (int)((float)iVar4 * *(float *)(this + 0xe0) - (float)iVar6));
  local_28 = local_18;
  uStack_20 = uStack_10;
LAB_04392b90:
  uVar1 = PrimeText_Game::Typeface_FZShaoEr_18;
  Sexy::Insets::Insets((Insets *)&local_18,(Insets *)(this + 0x100));
  WriteWordInRect(param_1,this + 0xd8,(Insets *)&local_28,uVar1,(Insets *)&local_18,0,1);
LAB_04392bcc:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantSkillTipsUI::PlantSkillTipsUI(std::wstring&, int, int, EPlantSkillTipsType) */

void __thiscall
PlantSkillTipsUI::PlantSkillTipsUI
          (PlantSkillTipsUI *this,undefined8 param_1,int param_2,int param_3,undefined4 param_5)

{
  ulong uVar1;
  Image *pIVar2;
  Image *pIVar3;
  PlantSkillTipsUI *pPVar4;
  float fVar5;
  
  Sexy::Widget::Widget((Widget *)this);
  pPVar4 = this + 0xd8;
  *(undefined ***)this = &PTR_GetClass_0683e8e0;
  FUN_05476574(pPVar4);
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  Sexy::FastCurve::SetOutRange((FastCurve *)(this + 0xf8),0.0,0.0);
  Sexy::Color::Color((Color *)(this + 0x100),1);
  thunk_FUN_05477b9c(pPVar4,param_1);
  *(undefined4 *)(this + 0xe4) = param_5;
  *(undefined4 *)(this + 0xe0) = 0x3f800000;
  uVar1 = FUN_054765d0(pPVar4);
  if (0x11 < uVar1) {
    *(undefined4 *)(this + 0xe0) = 0x3f99999a;
    fVar5 = (float)FUN_043924c0(0x41c80000);
    uVar1 = FUN_054765d0((float)param_3 - fVar5,pPVar4);
    if (0x18 < uVar1) {
      *(undefined4 *)(this + 0xe0) = 0x3fc00000;
      FUN_043924c0(0x42200000);
    }
  }
  pIVar2 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00140);
  pIVar3 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00410);
  SetImage(this,pIVar2,pIVar3);
  Sexy::Widget::Move((int)this,param_2);
  return;
}

