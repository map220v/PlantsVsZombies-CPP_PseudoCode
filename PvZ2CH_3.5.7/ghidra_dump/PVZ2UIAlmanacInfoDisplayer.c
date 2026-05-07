// Class: PVZ2UIAlmanacInfoDisplayer


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIAlmanacInfoDisplayer::colorizeDescription(std::wstring const&) */

void __thiscall
PVZ2UIAlmanacInfoDisplayer::colorizeDescription(PVZ2UIAlmanacInfoDisplayer *this,wstring *param_1)

{
  long lVar1;
  wstring *in_x8;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [8];
  wstring awStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05477b24();
  FUN_05478178(auStack_20,&DAT_05722e80,auStack_10);
  nop();
  lVar1 = FUN_054767d0();
  if (lVar1 != -1) {
    do {
      FUN_05478178(awStack_18,L"[COLOR_STAT]",auStack_28);
      TodReplaceString(in_x8,L"{STAT}",awStack_18);
      FUN_054766c8();
      FUN_05476c50(auStack_10);
      FUN_05476c50(awStack_18);
      nop();
      lVar1 = FUN_054767d0();
    } while (lVar1 != -1);
  }
  FUN_054772c4(auStack_20,L"{KEYWORD}");
  lVar1 = FUN_054767d0();
  if (lVar1 != -1) {
    do {
      FUN_05478178(awStack_18,L"[COLOR_KEYWORD]",auStack_28);
      TodReplaceString(in_x8,L"{KEYWORD}",awStack_18);
      FUN_054766c8();
      FUN_05476c50(auStack_10);
      FUN_05476c50(awStack_18);
      nop();
      lVar1 = FUN_054767d0();
    } while (lVar1 != -1);
  }
  FUN_054772c4(auStack_20,L"{FLAVOR}");
  lVar1 = FUN_054767d0();
  if (this[0xfa] == (PVZ2UIAlmanacInfoDisplayer)0x0) {
    if (lVar1 != -1) {
      do {
        FUN_05478178(awStack_18,L"[COLOR_FLAVOR]",auStack_28);
        TodReplaceString(in_x8,L"{FLAVOR}",awStack_18);
        FUN_054766c8();
        FUN_05476c50(auStack_10);
        FUN_05476c50(awStack_18);
        nop();
        lVar1 = FUN_054767d0();
      } while (lVar1 != -1);
    }
  }
  else {
    FUN_05477da4(auStack_10);
    FUN_054766c8();
    FUN_05476c50(auStack_10);
  }
  FUN_05476c50(auStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIAlmanacInfoDisplayer::getValueColor(BoardEntityStatValue) */

void PVZ2UIAlmanacInfoDisplayer::getValueColor(Insets *param_1,undefined8 param_2,int param_3)

{
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(param_1,(Insets *)&DAT_06afe3d8);
  if (param_3 - 0x31U < 6) {
    switch(param_3) {
    default:
      Sexy::Insets::Insets((Insets *)&local_18,0x11,0xf1,0,0xff);
      *(undefined8 *)param_1 = local_18;
      *(undefined8 *)(param_1 + 8) = uStack_10;
      break;
    case 0x34:
    case 0x35:
    case 0x36:
      Sexy::Insets::Insets((Insets *)&local_18,0xeb,0x1b,0x31,0xff);
      *(undefined8 *)param_1 = local_18;
      *(undefined8 *)(param_1 + 8) = uStack_10;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* PVZ2UIAlmanacInfoDisplayer::getStatBarPct(BoardEntityStatValue) */

undefined4 __thiscall PVZ2UIAlmanacInfoDisplayer::getStatBarPct(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_2 - 1U < 0x30) {
    uVar1 = *(undefined4 *)(&DAT_05753600 + (ulong)(param_2 - 1U) * 4);
  }
  return uVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIAlmanacInfoDisplayer::getStringFromEnum(BoardEntityStatType) */

void PVZ2UIAlmanacInfoDisplayer::getStringFromEnum
               (undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  wchar_t *pwVar1;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  switch(param_3) {
  case 0:
    pwVar1 = L"[STAT_DAMAGE]";
    break;
  case 1:
  case 2:
    pwVar1 = L"[STAT_TOUGHNESS]";
    break;
  case 3:
    pwVar1 = L"[STAT_RECHARGE]";
    break;
  case 4:
    pwVar1 = L"[STAT_AREA]";
    break;
  case 5:
    pwVar1 = L"[STAT_RANGE]";
    break;
  case 6:
    pwVar1 = L"[STAT_SPEED]";
    break;
  case 7:
    pwVar1 = L"[STAT_VARIABLE]";
    break;
  case 8:
    pwVar1 = L"[STAT_INSTANTKILL_RESISTENCE]";
    break;
  case 9:
    pwVar1 = L"[STAT_PHYSICAL_RESISTENCE]";
    break;
  case 10:
    pwVar1 = L"[STAT_POISON_RESISTENCE]";
    break;
  case 0xb:
    pwVar1 = L"[STAT_LIGHTNING_RESISTENCE]";
    break;
  case 0xc:
    pwVar1 = L"[STAT_MAGIC_RESISTENCE]";
    break;
  case 0xd:
    pwVar1 = L"[STAT_FROST_RESISTENCE]";
    break;
  case 0xe:
    pwVar1 = L"[STAT_FLAME_RESISTENCE]";
    break;
  default:
    pwVar1 = L"";
  }
  FUN_05478178(param_1,pwVar1,auStack_10);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIAlmanacInfoDisplayer::getStringFromValue(BoardEntityStatValue) */

void PVZ2UIAlmanacInfoDisplayer::getStringFromValue
               (undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  wchar_t *pwVar1;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  switch(param_3) {
  case 0:
    pwVar1 = L"[STAT_DAMAGE_DAMAGE0]";
    break;
  case 1:
    pwVar1 = L"[STAT_DAMAGE_DAMAGE1]";
    break;
  case 2:
    pwVar1 = L"[STAT_DAMAGE_DAMAGE2]";
    break;
  case 3:
    pwVar1 = L"[STAT_DAMAGE_DAMAGE3]";
    break;
  case 4:
    pwVar1 = L"[STAT_DAMAGE_DAMAGE4]";
    break;
  case 5:
    pwVar1 = L"[STAT_DAMAGE_DAMAGE5]";
    break;
  case 6:
    pwVar1 = L"[STAT_DAMAGE_DAMAGE6]";
    break;
  case 7:
    pwVar1 = L"[STAT_RECHARGE_RECHARGE0]";
    break;
  case 8:
    pwVar1 = L"[STAT_RECHARGE_RECHARGE1]";
    break;
  case 9:
    pwVar1 = L"[STAT_RECHARGE_RECHARGE2]";
    break;
  case 10:
    pwVar1 = L"[STAT_RECHARGE_RECHARGE3]";
    break;
  case 0xb:
    pwVar1 = L"[STAT_RECHARGE_RECHARGE4]";
    break;
  case 0xc:
    pwVar1 = L"[STAT_TOUGHNESS_ARMOR0]";
    break;
  case 0xd:
    pwVar1 = L"[STAT_TOUGHNESS_ARMOR1]";
    break;
  case 0xe:
    pwVar1 = L"[STAT_TOUGHNESS_ARMOR2]";
    break;
  case 0xf:
    pwVar1 = L"[STAT_TOUGHNESS_ARMOR3]";
    break;
  case 0x10:
    pwVar1 = L"[STAT_AREA_SINGLE]";
    break;
  case 0x11:
    pwVar1 = L"[STAT_AREA_SQUARE]";
    break;
  case 0x12:
    pwVar1 = L"[STAT_AREA_1BY4]";
    break;
  case 0x13:
    pwVar1 = L"[STAT_AREA_3BY2]";
    break;
  case 0x14:
    pwVar1 = L"[STAT_AREA_3BY3]";
    break;
  case 0x15:
    pwVar1 = L"[STAT_AREA_LANE]";
    break;
  case 0x16:
    pwVar1 = L"[STAT_AREA_FULLBOARD]";
    break;
  case 0x17:
    pwVar1 = L"[STAT_RANGE_TOUCH]";
    break;
  case 0x18:
    pwVar1 = L"[STAT_RANGE_CLOSE]";
    break;
  case 0x19:
    pwVar1 = L"[STAT_RANGE_3TILES]";
    break;
  case 0x1a:
    pwVar1 = L"[STAT_RANGE_STRAIGHT]";
    break;
  case 0x1b:
    pwVar1 = L"[STAT_RANGE_LOBBED]";
    break;
  case 0x1c:
    pwVar1 = L"[STAT_RANGE_FRONTBACK]";
    break;
  case 0x1d:
    pwVar1 = L"[STAT_RANGE_MULTIHIT]";
    break;
  case 0x1e:
    pwVar1 = L"[STAT_RANGE_MULTILANE]";
    break;
  case 0x1f:
    pwVar1 = L"[STAT_RANGE_5WAY]";
    break;
  case 0x20:
    pwVar1 = L"[STAT_TOUGHNESS_TOUGHNESS0]";
    break;
  case 0x21:
    pwVar1 = L"[STAT_TOUGHNESS_TOUGHNESS1]";
    break;
  case 0x22:
    pwVar1 = L"[STAT_TOUGHNESS_TOUGHNESS2]";
    break;
  case 0x23:
    pwVar1 = L"[STAT_TOUGHNESS_TOUGHNESS3]";
    break;
  case 0x24:
    pwVar1 = L"[STAT_TOUGHNESS_TOUGHNESS4]";
    break;
  case 0x25:
    pwVar1 = L"[STAT_TOUGHNESS_TOUGHNESS5]";
    break;
  case 0x26:
    pwVar1 = L"[STAT_TOUGHNESS_TOUGHNESS6]";
    break;
  case 0x27:
    pwVar1 = L"[STAT_TOUGHNESS_TOUGHNESS7]";
    break;
  case 0x28:
    pwVar1 = L"[STAT_TOUGHNESS_TOUGHNESS8]";
    break;
  case 0x29:
    pwVar1 = L"[STAT_SPEED_SPEED0]";
    break;
  case 0x2a:
    pwVar1 = L"[STAT_SPEED_SPEED1]";
    break;
  case 0x2b:
    pwVar1 = L"[STAT_SPEED_SPEED2]";
    break;
  case 0x2c:
    pwVar1 = L"[STAT_SPEED_SPEED3]";
    break;
  case 0x2d:
    pwVar1 = L"[STAT_SPEED_SPEED4]";
    break;
  case 0x2e:
    pwVar1 = L"[STAT_SPEED_SPEED5]";
    break;
  case 0x2f:
    pwVar1 = L"[STAT_RANGE_4WAY]";
    break;
  case 0x30:
    pwVar1 = L"[STAT_VARIABLE_VARIABLE]";
    break;
  case 0x31:
    pwVar1 = L"[STAT_RESISTENCE_D]";
    break;
  case 0x32:
    pwVar1 = L"[STAT_RESISTENCE_C]";
    break;
  case 0x33:
    pwVar1 = L"[STAT_RESISTENCE_B]";
    break;
  case 0x34:
    pwVar1 = L"[STAT_RESISTENCE_A]";
    break;
  case 0x35:
    pwVar1 = L"[STAT_RESISTENCE_S]";
    break;
  case 0x36:
    pwVar1 = L"[STAT_RESISTENCE_SS]";
    break;
  default:
    pwVar1 = L"";
  }
  FUN_05478178(param_1,pwVar1,auStack_10);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIAlmanacInfoDisplayer::Resize(int, int, int, int) */

void __thiscall
PVZ2UIAlmanacInfoDisplayer::Resize
          (PVZ2UIAlmanacInfoDisplayer *this,int param_1,int param_2,int param_3,int param_4)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  PVZ2UIAlmanacInfoDisplayer PVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  ulong uVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  int iVar15;
  int iVar16;
  long lVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  int local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Resize((Widget *)this,param_1,param_2,param_3,param_4);
  fVar19 = (float)FUN_04377390(0x41880000);
  iVar16 = *(int *)(this + 0x50);
  fVar20 = (float)FUN_04377390(0x42080000);
  iVar12 = (int)((float)iVar16 - fVar20);
  if (this[0xf8] == (PVZ2UIAlmanacInfoDisplayer)0x0) {
    uVar18 = *(undefined8 *)(this + 0xd8);
    iVar13 = (int)fVar19;
    uVar8 = FUN_04376f28(uVar18,*(undefined8 *)(this + 0xe0));
    fVar20 = (float)FUN_04377390((float)(uVar8 - 1) * 17.0);
    iVar2 = 0;
    if (uVar8 != 0) {
      iVar2 = (int)((ulong)(long)(iVar12 - (int)fVar20) / uVar8);
    }
    local_1c = iVar2;
    local_18 = FUN_043772fc(0xdc);
    piVar9 = eastl::min_alt<int>(&local_1c,&local_18);
    iVar12 = *piVar9;
    if (uVar8 != 0) {
      uVar11 = 0;
      uVar14 = 0;
      while( true ) {
        uVar1 = uVar14 + 1;
        puVar7 = (undefined8 *)FUN_04376f34(uVar18,uVar14);
        plVar10 = (long *)*puVar7;
        fVar20 = (float)FUN_04377390(0x3f800000);
        fVar19 = (float)FUN_04377390(0x41e00000);
        fVar21 = (float)FUN_04377390(0x42780000);
        (**(code **)(*plVar10 + 0x198))
                  (plVar10,(int)uVar11 + iVar13,(int)(fVar20 + fVar19 * 0.5),iVar12,(int)fVar21);
        if (uVar8 == uVar1) break;
        uVar11 = uVar1 & 0xffffffff;
        if ((int)uVar1 != 0) {
          fVar20 = (float)FUN_04377390(0x41880000);
          uVar11 = (ulong)(uint)(int)((fVar20 + (float)iVar2) * (float)((int)uVar14 + 1));
        }
        uVar18 = *(undefined8 *)(this + 0xd8);
        uVar14 = uVar1;
      }
      PVar5 = this[0xf8];
      iVar16 = *(int *)(this + 0x50);
      goto LAB_0437a154;
    }
LAB_0437a268:
    uVar23 = 0x42d60000;
  }
  else {
    fVar21 = (float)FUN_04377390(0x41200000);
    iVar13 = (int)fVar21;
    iVar15 = (int)((float)iVar12 * 0.4);
    fVar22 = (float)FUN_04377390(0x42ee0000);
    uVar18 = *(undefined8 *)(this + 0xd8);
    uVar4 = *(uint *)(this + 0xfc);
    iVar2 = (iVar15 - iVar13) / 2;
    iVar3 = ((int)(fVar22 - fVar20) - iVar13) / 2;
    lVar6 = FUN_04376f28(uVar18,*(undefined8 *)(this + 0xe0));
    fVar20 = (float)FUN_04377390(0x41a00000);
    iVar12 = ((iVar12 - iVar15) - (int)fVar20) / 3;
    if (lVar6 == 0) goto LAB_0437a280;
    lVar17 = 0;
    while( true ) {
      iVar16 = (int)lVar17;
      if ((int)uVar4 < iVar16) {
        iVar16 = ~uVar4 + iVar16;
        puVar7 = (undefined8 *)FUN_04376f34(uVar18,lVar17);
        (**(code **)(*(long *)*puVar7 + 0x198))
                  ((long *)*puVar7,
                   iVar13 + (int)((float)(iVar16 % 3) * (fVar21 + (float)iVar12)) + iVar15,
                   iVar13 + (int)((float)(iVar16 / 3) * (fVar21 + (float)iVar3)),iVar12,iVar3);
      }
      else {
        puVar7 = (undefined8 *)FUN_04376f34(uVar18,lVar17);
        (**(code **)(*(long *)*puVar7 + 0x198))
                  ((long *)*puVar7,iVar13 + (int)((float)(iVar16 % 2) * (fVar21 + (float)iVar2)),
                   iVar13 + (int)((float)(iVar16 / 2) * (fVar21 + (float)iVar3)),iVar2,iVar3);
      }
      if (lVar6 == lVar17 + 1) break;
      lVar17 = lVar17 + 1;
      fVar21 = (float)FUN_04377390(0x41200000);
      uVar18 = *(undefined8 *)(this + 0xd8);
    }
    PVar5 = this[0xf8];
    iVar16 = *(int *)(this + 0x50);
LAB_0437a154:
    if (PVar5 == (PVZ2UIAlmanacInfoDisplayer)0x0) goto LAB_0437a268;
    uVar23 = 0x42ee0000;
  }
  fVar22 = (float)FUN_04377390(uVar23);
  fVar19 = (float)FUN_04377390(0x41880000);
LAB_0437a280:
  Sexy::Insets::Insets
            ((Insets *)&local_18,iVar13,(int)fVar22,iVar16 + iVar13 * -2,
             (int)((float)(*(int *)(this + 0x54) - (int)fVar22) - fVar19));
  plVar10 = *(long **)(this + 0xf0);
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x198))(plVar10,local_18,local_14,local_10,local_c);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PVZ2UIAlmanacInfoDisplayer::getStatIconFromEnum(BoardEntityStatType) */

undefined8 __thiscall
PVZ2UIAlmanacInfoDisplayer::getStatIconFromEnum(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  switch(param_2) {
  case 0:
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)
                       AlmanacStatSettings::IMAGE_UI_ALMANAC_PLANTS_DAMAGE_ICON);
    return uVar1;
  case 1:
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)
                       AlmanacStatSettings::IMAGE_UI_ALMANAC_ZOMBIES_ZOMBIETOUGHNESS_ICON);
    return uVar1;
  case 2:
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)
                       AlmanacStatSettings::IMAGE_UI_ALMANAC_PLANTS_TOUGHNESS_ICON);
    return uVar1;
  case 3:
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)
                       AlmanacStatSettings::IMAGE_UI_ALMANAC_PLANTS_RECHARGE_ICON);
    return uVar1;
  case 4:
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)
                       AlmanacStatSettings::IMAGE_UI_ALMANAC_PLANTS_POWERAREA_ICON);
    return uVar1;
  case 5:
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)
                       AlmanacStatSettings::IMAGE_UI_ALMANAC_PLANTS_RANGE_ICON);
    return uVar1;
  case 6:
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)
                       AlmanacStatSettings::IMAGE_UI_ALMANAC_ZOMBIES_ZOMBIESPEED_ICON);
    return uVar1;
  case 7:
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)
                       AlmanacStatSettings::IMAGE_UI_ALMANAC_PLANTS_VARIABLE_ICON);
    return uVar1;
  case 8:
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)
                       AlmanacStatSettings::IMAGE_UI_ALMANAC_ZOMBIES_INSTANTKILL_RESISTENCE);
    return uVar1;
  case 9:
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)
                       AlmanacStatSettings::IMAGE_UI_ALMANAC_ZOMBIES_PHYSICAL_RESISTENCE);
    return uVar1;
  case 10:
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)
                       AlmanacStatSettings::IMAGE_UI_ALMANAC_ZOMBIES_POISON_RESISTENCE);
    return uVar1;
  case 0xb:
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)
                       AlmanacStatSettings::IMAGE_UI_ALMANAC_ZOMBIES_LIGHTNING_RESISTENCE);
    return uVar1;
  case 0xc:
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)
                       AlmanacStatSettings::IMAGE_UI_ALMANAC_ZOMBIES_MAGIC_RESISTENCE);
    return uVar1;
  case 0xd:
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)
                       AlmanacStatSettings::IMAGE_UI_ALMANAC_ZOMBIES_FROST_RESISTENCE);
    return uVar1;
  case 0xe:
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)
                       AlmanacStatSettings::IMAGE_UI_ALMANAC_ZOMBIES_FLAME_RESISTENCE);
    return uVar1;
  default:
    return 0;
  }
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIAlmanacInfoDisplayer::Draw(Sexy::Graphics*) */

void __thiscall PVZ2UIAlmanacInfoDisplayer::Draw(PVZ2UIAlmanacInfoDisplayer *this,Graphics *param_1)

{
  int iVar1;
  bool bVar2;
  undefined1 *this_00;
  undefined8 uVar3;
  SecretGachaMgr *this_01;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  undefined4 local_20 [2];
  int local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0xf9] == (PVZ2UIAlmanacInfoDisplayer)0x0) {
    if (this[0xf8] == (PVZ2UIAlmanacInfoDisplayer)0x0) {
      this_00 = AlmanacSettings::IMAGE_UI_DIALOG_ASSET_CARD_GREEN;
    }
    else {
      this_00 = AlmanacSettings::IMAGE_UI_DIALOG_ASSET_CARD_PURPLE2;
    }
  }
  else {
    this_00 = AlmanacSettings::IMAGE_UI_DIALOG_ASSET_PVP_CARD;
  }
  uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->((CachedUIResourcePtr<Sexy::Image> *)this_00);
  Sexy::Insets::Insets((Insets *)local_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  Draw9SliceImage(param_1,(Insets *)local_18,uVar3);
  if (this[0xf8] != (PVZ2UIAlmanacInfoDisplayer)0x0) {
    fVar8 = (float)FUN_04377390(0x41200000);
    iVar7 = (int)fVar8;
    fVar8 = (float)FUN_04377390(0x42080000);
    iVar5 = (int)((float)(int)((float)*(int *)(this + 0x50) - fVar8) * 0.4);
    fVar8 = (float)FUN_04377390(0x42ee0000);
    fVar9 = (float)FUN_04377390(0x41900000);
    local_20[0] = 1;
    iVar6 = (int)((fVar8 - (float)iVar7) - fVar9);
    local_18[0] = (int)((float)iVar6 * 0.03);
    this_01 = (SecretGachaMgr *)eastl::max_alt<int>((int *)local_20,local_18);
    iVar1 = *(int *)this_01;
    SecretGachaMgr::GetScreenType(this_01);
    bVar2 = std::operator==((string *)local_20,"Large");
    if (bVar2) {
      iVar4 = FUN_043772fc(6);
      iVar4 = (iVar7 + iVar5) - iVar4;
    }
    else {
      fVar8 = (float)FUN_04377390(0x41a00000);
      iVar4 = (int)((float)(iVar7 + iVar5) - fVar8);
    }
    Sexy::Insets::Insets((Insets *)local_18,iVar4,iVar7,iVar1,iVar6);
    uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)
                       AlmanacSettings::IMAGE_UI_DIALOG_ASSET_DIVIDE_LINE);
    Draw9SliceImage(param_1,(Insets *)local_18,uVar3);
    std::string::~string((string *)local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIAlmanacInfoDisplayer::~PVZ2UIAlmanacInfoDisplayer() */

void __thiscall
PVZ2UIAlmanacInfoDisplayer::~PVZ2UIAlmanacInfoDisplayer(PVZ2UIAlmanacInfoDisplayer *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_0683b210;
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Almanac");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  if (this[0xfa] == (PVZ2UIAlmanacInfoDisplayer)0x0) {
    std::string::string(asStack_10,"UI_ZombieAlmanac");
    LawnApp::DeleteGroup(pLVar1,asStack_10);
    std::string::~string(asStack_10);
    nop();
    pLVar1 = gLawnApp;
    std::string::string(asStack_10,"UI_ZombieAlmanac_Dynamic");
    LawnApp::DeleteGroup(pLVar1,asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  std::vector<PVZ2UIAlmanacStat*,std::allocator<PVZ2UIAlmanacStat*>>::~vector
            ((vector<PVZ2UIAlmanacStat*,std::allocator<PVZ2UIAlmanacStat*>> *)(this + 0xd8));
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ2UIAlmanacInfoDisplayer::~PVZ2UIAlmanacInfoDisplayer() */

void __thiscall
PVZ2UIAlmanacInfoDisplayer::~PVZ2UIAlmanacInfoDisplayer(PVZ2UIAlmanacInfoDisplayer *this)

{
  ~PVZ2UIAlmanacInfoDisplayer(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIAlmanacInfoDisplayer::PVZ2UIAlmanacInfoDisplayer(Sexy::RtWeakPtr<ObjectTypeDescriptor
   const>, bool, bool, bool) */

void __thiscall
PVZ2UIAlmanacInfoDisplayer::PVZ2UIAlmanacInfoDisplayer
          (PVZ2UIAlmanacInfoDisplayer *this,RtWeakPtr *param_2,char param_3,
          PVZ2UIAlmanacInfoDisplayer param_4,PVZ2UIAlmanacInfoDisplayer param_5)

{
  LawnApp *pLVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  PVZ2UIAlmanacDescriptionHolder *this_00;
  long extraout_x0;
  RtObject *pRVar5;
  long extraout_x0_00;
  long lVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  Widget *pWVar9;
  ulong uVar10;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *this_01;
  string *extraout_x1;
  string *extraout_x1_00;
  uint uVar11;
  ulong uVar12;
  PVZ2UIAlmanacStat *pPVar13;
  wstring awStack_78 [8];
  wstring awStack_70 [8];
  wstring awStack_68 [8];
  Widget *local_60;
  undefined1 auStack_58 [8];
  wstring awStack_50 [8];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  this_01 = (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xd8);
  *(undefined ***)this = &PTR_GetClass_0683b210;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(this_01);
  this[0xfa] = param_5;
  this[0xf9] = param_4;
  *(undefined4 *)(this + 0xfc) = 0;
  pLVar1 = gLawnApp;
  std::string::string((string *)&local_20,"UI_Almanac");
  LawnApp::LoadGroup(pLVar1,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  pLVar1 = gLawnApp;
  if (this[0xfa] == (PVZ2UIAlmanacInfoDisplayer)0x0) {
    std::string::string((string *)&local_20,"UI_ZombieAlmanac");
    LawnApp::LoadGroup(pLVar1,(string *)&local_20);
    std::string::~string((string *)&local_20);
    nop();
    pLVar1 = gLawnApp;
    std::string::string((string *)&local_20,"UI_ZombieAlmanac_Dynamic");
    LawnApp::LoadGroup(pLVar1,(string *)&local_20);
    std::string::~string((string *)&local_20);
    nop();
  }
  FUN_05476574();
  FUN_05476574(awStack_70);
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(param_2);
  if (bVar2) {
    pRVar5 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    bVar2 = Sexy::RtObject::IsA<PlantType>(pRVar5);
    if (bVar2) {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_20,(RtWeakPtrBase *)param_2);
      Plant::GetFormattedDescriptionHeader((Plant *)&local_38,(string *)&local_20);
      FUN_054766c8(awStack_78,(wstring *)&local_38);
      FUN_05476c50((wstring *)&local_38);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
      std::string::string((string *)&local_20,"[PLANT_FAMILT_BOOST_TITLE]");
      Sexy::StringToWString((Sexy *)&local_20,extraout_x1);
      TodStringTranslate((wstring *)&local_38);
      std::operator+(L"^oldclr^",(wstring *)&local_40);
      FUN_05476c50((RtWeakPtr<Sexy::SoundResource> *)&local_40);
      FUN_05476c50((wstring *)&local_38);
      std::string::~string((string *)&local_20);
      nop();
      Sexy::LazySingleton<PlantFamilyMgr>::GetInstance();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)param_2);
      PlantFamilyMgr::GetPlantBoostInFamily
                ((PlantFamilyMgr *)&local_20,(RtWeakPtr<Sexy::SoundResource> *)&local_40);
      std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
                ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
                 &local_38,(vector *)&local_20);
      std::vector<std::wstring,std::allocator<std::wstring>>::~vector
                ((vector<std::wstring,std::allocator<std::wstring>> *)&local_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      cVar3 = std::vector<std::wstring,std::allocator<std::wstring>>::empty
                        ((vector<std::wstring,std::allocator<std::wstring>> *)&local_38);
      if (cVar3 == '\0') {
        local_48 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)&local_38);
        local_40 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)&local_38);
        while (bVar2 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40),
              bVar2) {
          uVar8 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
          FUN_036944b8((string *)&local_20,&DAT_0570f658,uVar8);
          thunk_FUN_05477668(awStack_68,(string *)&local_20);
          FUN_05476c50((string *)&local_20);
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_48);
        }
      }
      else {
        std::string::string((string *)&local_20,"[PLANT_FAMILT_BOOST_RESEARCH]");
        Sexy::StringToWString((Sexy *)&local_20,extraout_x1_00);
        TodStringTranslate((wstring *)&local_40);
        thunk_FUN_05477668(awStack_68,(exception_ptr *)&local_48);
        FUN_05476c50((exception_ptr *)&local_48);
        FUN_05476c50((RtWeakPtr<Sexy::SoundResource> *)&local_40);
        std::string::~string((string *)&local_20);
        nop();
      }
      FUN_05477888(awStack_68,&DAT_0570a740);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_20,(RtWeakPtrBase *)param_2);
      Plant::GetFormattedDescription((Plant *)&local_40,(string *)&local_20);
      std::operator+(awStack_68,(wstring *)&local_40);
      colorizeDescription(this,(wstring *)&local_48);
      FUN_054766c8(awStack_70,awStack_50);
      FUN_05476c50(awStack_50);
      FUN_05476c50((exception_ptr *)&local_48);
      FUN_05476c50((RtWeakPtr<Sexy::SoundResource> *)&local_40);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      nop();
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(extraout_x0 + 0x28));
      this[0xf8] = (PVZ2UIAlmanacInfoDisplayer)0x0;
      if (lVar6 != -0xd0) {
        uVar12 = 0;
        while( true ) {
          uVar8 = *(undefined8 *)(lVar6 + 0xd0);
          uVar10 = FUN_04376f0c(uVar8,*(undefined8 *)(lVar6 + 0xd8));
          if (uVar10 <= uVar12) break;
          puVar7 = (undefined4 *)FUN_04376f18(uVar8,uVar12);
          getStringFromEnum(awStack_50,this,*puVar7);
          TodStringTranslate(awStack_50);
          getStringFromValue((RtWeakPtr<Sexy::SoundResource> *)&local_40,this,puVar7[1]);
          TodStringTranslate((wstring *)&local_40);
          uVar8 = getStatIconFromEnum(this,*puVar7);
          pPVar13 = (PVZ2UIAlmanacStat *)getStatBarPct(this,puVar7[1]);
          Sexy::Color::Color((Color *)&local_20,1);
          pWVar9 = ::operator_new(0x108);
          PVZ2UIAlmanacStat::PVZ2UIAlmanacStat
                    (pPVar13,pWVar9,this[0xf8],auStack_58,(exception_ptr *)&local_48,uVar8,
                     this[0xf9],(string *)&local_20);
          local_60 = pWVar9;
          FUN_05476c50((exception_ptr *)&local_48);
          FUN_05476c50((RtWeakPtr<Sexy::SoundResource> *)&local_40);
          FUN_05476c50(auStack_58);
          FUN_05476c50(awStack_50);
          std::vector<PVZ2UIAlmanacStat*,std::allocator<PVZ2UIAlmanacStat*>>::push_back
                    ((vector<PVZ2UIAlmanacStat*,std::allocator<PVZ2UIAlmanacStat*>> *)this_01,
                     (PVZ2UIAlmanacStat **)&local_60);
          Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,local_60);
          uVar12 = uVar12 + 1;
        }
      }
      std::vector<std::wstring,std::allocator<std::wstring>>::~vector
                ((vector<std::wstring,std::allocator<std::wstring>> *)&local_38);
      FUN_05476c50(awStack_68);
      goto LAB_0438660c;
    }
  }
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(param_2);
  if (bVar2) {
    pRVar5 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    bVar2 = Sexy::RtObject::IsA<ZombieType>(pRVar5);
    if (bVar2) {
      this[0xf8] = (PVZ2UIAlmanacInfoDisplayer)0x1;
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_20,(RtWeakPtrBase *)param_2);
      Zombie::GetFormattedDescriptionHeader((Zombie *)&local_38,(string *)&local_20);
      FUN_054766c8(awStack_78,(wstring *)&local_38);
      FUN_05476c50((wstring *)&local_38);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_20,(RtWeakPtrBase *)param_2);
      Zombie::GetFormattedDescription((Zombie *)&local_38,(string *)&local_20);
      colorizeDescription(this,(wstring *)&local_38);
      FUN_054766c8(awStack_70,(wstring *)&local_40);
      FUN_05476c50((wstring *)&local_40);
      FUN_05476c50((wstring *)&local_38);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      nop();
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(extraout_x0_00 + 0xa0));
      local_48 = FUN_0437b140(*(undefined8 *)(lVar6 + 0x120));
      local_40 = FUN_0437b190(*(undefined8 *)(lVar6 + 0x128));
      while( true ) {
        bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_48,(__normal_iterator *)&local_40)
        ;
        uVar11 = (uint)bVar2;
        if (!bVar2) break;
        puVar7 = (undefined4 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
        local_38 = *puVar7;
        local_34 = puVar7[1];
        std::vector<BoardEntityStat,std::allocator<BoardEntityStat>>::push_back
                  ((vector<BoardEntityStat,std::allocator<BoardEntityStat>> *)&local_20,
                   (BoardEntityStat *)&local_38);
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_48);
      }
      uVar4 = FUN_04376f0c(local_20,local_18);
      *(undefined4 *)(this + 0xfc) = uVar4;
      do {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_38,(RtWeakPtrBase *)param_2);
        uVar4 = Zombie::GetResistenceRank(uVar11,(wstring *)&local_38);
        local_48 = CONCAT44(local_48._4_4_,uVar4);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
        local_40 = CONCAT44(local_40._4_4_,uVar11);
        uVar11 = uVar11 + 1;
        puVar7 = (undefined4 *)
                 std::
                 map<ZombieResistenceType,BoardEntityStatType,std::less<ZombieResistenceType>,std::allocator<std::pair<ZombieResistenceType_const,BoardEntityStatType>>>
                 ::operator[]((map<ZombieResistenceType,BoardEntityStatType,std::less<ZombieResistenceType>,std::allocator<std::pair<ZombieResistenceType_const,BoardEntityStatType>>>
                               *)&DAT_06afe1f0,(ZombieResistenceType *)&local_40);
        local_38 = *puVar7;
        puVar7 = (undefined4 *)
                 std::
                 map<ZombieResistenceRank,BoardEntityStatValue,std::less<ZombieResistenceRank>,std::allocator<std::pair<ZombieResistenceRank_const,BoardEntityStatValue>>>
                 ::operator[]((map<ZombieResistenceRank,BoardEntityStatValue,std::less<ZombieResistenceRank>,std::allocator<std::pair<ZombieResistenceRank_const,BoardEntityStatValue>>>
                               *)&DAT_06afda98,(ZombieResistenceRank *)&local_48);
        local_34 = *puVar7;
        std::vector<BoardEntityStat,std::allocator<BoardEntityStat>>::push_back
                  ((vector<BoardEntityStat,std::allocator<BoardEntityStat>> *)&local_20,
                   (BoardEntityStat *)&local_38);
      } while (uVar11 != 7);
      uVar12 = 0;
      while( true ) {
        uVar8 = local_20;
        uVar10 = FUN_04376f0c(local_20,local_18);
        if (uVar10 <= uVar12) break;
        puVar7 = (undefined4 *)FUN_04376f20(uVar8,uVar12);
        getStringFromEnum(awStack_50,this,*puVar7);
        TodStringTranslate(awStack_50);
        getStringFromValue((wstring *)&local_40,this,puVar7[1]);
        TodStringTranslate((wstring *)&local_40);
        uVar8 = getStatIconFromEnum(this,*puVar7);
        pPVar13 = (PVZ2UIAlmanacStat *)getStatBarPct(this,puVar7[1]);
        getValueColor((wstring *)&local_38,this,puVar7[1]);
        pWVar9 = ::operator_new(0x108);
        PVZ2UIAlmanacStat::PVZ2UIAlmanacStat
                  (pPVar13,pWVar9,this[0xf8],auStack_58,(exception_ptr *)&local_48,uVar8,this[0xf9],
                   (wstring *)&local_38);
        local_60 = pWVar9;
        FUN_05476c50((exception_ptr *)&local_48);
        FUN_05476c50((wstring *)&local_40);
        FUN_05476c50(auStack_58);
        FUN_05476c50(awStack_50);
        std::vector<PVZ2UIAlmanacStat*,std::allocator<PVZ2UIAlmanacStat*>>::push_back
                  ((vector<PVZ2UIAlmanacStat*,std::allocator<PVZ2UIAlmanacStat*>> *)this_01,
                   (PVZ2UIAlmanacStat **)&local_60);
        Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,local_60);
        uVar12 = uVar12 + 1;
      }
      std::vector<BoardEntityStat,std::allocator<BoardEntityStat>>::~vector
                ((vector<BoardEntityStat,std::allocator<BoardEntityStat>> *)&local_20);
    }
  }
LAB_0438660c:
  *(undefined8 *)(this + 0xf0) = 0;
  if (param_3 != '\0') {
    this_00 = ::operator_new(0xf0);
    PVZ2UIAlmanacDescriptionHolder::PVZ2UIAlmanacDescriptionHolder(this_00,awStack_78,awStack_70);
    *(PVZ2UIAlmanacDescriptionHolder **)(this + 0xf0) = this_00;
    Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,(Widget *)this_00);
  }
  FUN_05476c50(awStack_70);
  FUN_05476c50(awStack_78);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

