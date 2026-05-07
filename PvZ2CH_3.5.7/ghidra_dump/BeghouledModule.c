// Class: BeghouledModule


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BeghouledModule::BeghouledTypeToString(BeghouledPlantType) */

void __thiscall BeghouledModule::BeghouledTypeToString(string *param_1,undefined4 param_2)

{
  long lVar1;
  char *__s;
  
  lVar1 = ___stack_chk_guard;
  switch(param_2) {
  case 0:
    __s = "EMPTY";
    break;
  case 1:
    __s = "peashooter";
    break;
  case 2:
    __s = "wallnut";
    break;
  case 3:
    __s = "cabbagepult";
    break;
  case 4:
    __s = "puffshroom";
    break;
  case 5:
    __s = "lightningreed";
    break;
  case 6:
    __s = "firepeashooter";
    break;
  case 7:
    __s = "repeater";
    break;
  case 8:
    __s = "threepeater";
    break;
  case 9:
    __s = "tallnut";
    break;
  case 10:
    __s = "endurian";
    break;
  case 0xb:
    __s = "pepperpult";
    break;
  case 0xc:
    __s = "melonpult";
    break;
  case 0xd:
    __s = "wintermelon";
    break;
  case 0xe:
    __s = "fumeshroom";
    break;
  case 0xf:
    __s = "laser_bean";
    break;
  case 0x10:
    __s = "electricblueberry";
    break;
  case 0x11:
    __s = "iceburg";
    break;
  case 0x12:
    __s = "stallia";
    break;
  case 0x13:
    __s = "primalpeashooter";
    break;
  case 0x14:
    __s = "kernelpult";
    break;
  case 0x15:
    __s = "akee";
    break;
  case 0x16:
    __s = "xshot";
    break;
  case 0x17:
    __s = "starfruit";
    break;
  case 0x18:
    __s = "snapdragon";
    break;
  case 0x19:
    __s = "coldsnapdragon";
    break;
  case 0x1a:
    __s = "sunbean";
    break;
  case 0x1b:
    __s = "hypnoshroom";
    break;
  case 0x1c:
    __s = "stunion";
    break;
  case 0x1d:
    __s = "lavaguava";
    break;
  case 0x1e:
    __s = "shrinkingviolet";
    break;
  case 0x1f:
    __s = "shadowshroom";
    break;
  case 0x20:
    __s = "bloomerang";
    break;
  case 0x21:
    __s = "bonkchoy";
    break;
  case 0x22:
    __s = "spikeweed";
    break;
  case 0x23:
    __s = "spikerock";
    break;
  case 0x24:
    __s = "springbean";
    break;
  case 0x25:
    __s = "splitpea";
    break;
  case 0x26:
    __s = "torchwood";
    break;
  case 0x27:
    __s = "citron";
    break;
  case 0x28:
    __s = "holonut";
    break;
  case 0x29:
    __s = "peanut";
    break;
  case 0x2a:
    __s = "magnetshroom";
    break;
  case 0x2b:
    __s = "chomper";
    break;
  case 0x2c:
    __s = "bowlingbulb";
    break;
  case 0x2d:
    __s = "homingthistle";
    break;
  case 0x2e:
    __s = "chardguard";
    break;
  case 0x2f:
    __s = "redstinger";
    break;
  case 0x30:
    __s = "toadstool";
    break;
  case 0x31:
    __s = "cactus";
    break;
  case 0x32:
    __s = "phatbeet";
    break;
  case 0x33:
    __s = "garlic";
    break;
  case 0x34:
    __s = "primalwallnut";
    break;
  case 0x35:
    __s = "nightshade";
    break;
  case 0x36:
    __s = "dusklobber";
    break;
  case 0x37:
    __s = "guacodile";
    break;
  case 0x38:
    __s = "coconutcannon";
    break;
  case 0x39:
    __s = "magnifyinggrass";
    break;
  case 0x3a:
    __s = "ghostpepper";
    break;
  case 0x3b:
    __s = "jackolantern";
    break;
  case 0x3c:
    __s = "dandelion";
    break;
  case 0x3d:
    __s = "bloominghearts";
    break;
  case 0x3e:
    __s = "sweetpotato";
    break;
  case 0x3f:
    __s = "moonflower";
    break;
  case 0x40:
    __s = "sunshroom";
    break;
  case 0x41:
    __s = "sunflower";
    break;
  case 0x42:
    __s = "primalsunflower";
    break;
  case 0x43:
    __s = "twinsunflower";
    break;
  case 0x44:
    __s = "wasabiwhip";
    break;
  case 0x45:
    __s = "explodeonut";
    break;
  case 0x46:
    __s = "aloe";
    break;
  case 0x47:
    __s = "kiwibeast";
    break;
  case 0x48:
    __s = "applemortar";
    break;
  case 0x49:
    __s = "witchhazel";
    break;
  case 0x4a:
    __s = "pokra";
    break;
  case 0x4b:
    __s = "shadowpeashooter";
    break;
  case 0x4c:
    __s = "shadowvanilla";
    break;
  case 0x4d:
    __s = "electricpeashooter";
    break;
  case 0x4e:
    __s = "snowpea";
    break;
  case 0xffffffff:
    __s = "crater";
    break;
  default:
    __s = "none";
  }
  std::string::string(param_1,__s);
  nop();
  if (lVar1 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return;
}


/* BeghouledModule::DragStart(Sexy::Point) */

void __thiscall BeghouledModule::DragStart(BeghouledModule *this,undefined8 *param_2)

{
  *(undefined8 *)(this + 0xa0) = *param_2;
  this[0x19] = (BeghouledModule)0x1;
  return;
}


/* BeghouledModule::GetPlantAt(int, int, BeghouledBoardState*) */

undefined4 __thiscall
BeghouledModule::GetPlantAt
          (BeghouledModule *this,int param_1,int param_2,BeghouledBoardState *param_3)

{
  int iVar1;
  
  if ((((-1 < param_1) && (iVar1 = BoardConstants::NUMBER_OF_COLUMNS(), param_1 < iVar1 + -1)) &&
      (-1 < param_2)) && (iVar1 = BoardConstants::NUMBER_OF_ROWS(), param_2 < iVar1)) {
    return *(undefined4 *)(param_3 + ((long)param_1 * 5 + (long)param_2) * 4);
  }
  return 0;
}


/* BeghouledModule::HorizontalMatchLength(int, int, BeghouledBoardState*) */

int __thiscall
BeghouledModule::HorizontalMatchLength
          (BeghouledModule *this,int param_1,int param_2,BeghouledBoardState *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = GetPlantAt(this,param_1,param_2,param_3);
  if ((1 < iVar1 + 1U) && (iVar2 = GetPlantAt(this,param_1 + -1,param_2,param_3), iVar1 != iVar2)) {
    iVar2 = 1;
    while (iVar3 = GetPlantAt(this,iVar2 + param_1,param_2,param_3), iVar1 == iVar3) {
      iVar2 = iVar2 + 1;
    }
    return iVar2;
  }
  return 0;
}


/* BeghouledModule::VerticalMatchLength(int, int, BeghouledBoardState*) */

int __thiscall
BeghouledModule::VerticalMatchLength
          (BeghouledModule *this,int param_1,int param_2,BeghouledBoardState *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = GetPlantAt(this,param_1,param_2,param_3);
  if ((1 < iVar1 + 1U) && (iVar2 = GetPlantAt(this,param_1,param_2 + -1,param_3), iVar1 != iVar2)) {
    iVar2 = 1;
    while (iVar3 = GetPlantAt(this,param_1,iVar2 + param_2,param_3), iVar1 == iVar3) {
      iVar2 = iVar2 + 1;
    }
    return iVar2;
  }
  return 0;
}


/* BeghouledModule::BoardHasMatch(BeghouledBoardState*) */

undefined8 __thiscall
BeghouledModule::BoardHasMatch(BeghouledModule *this,BeghouledBoardState *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  do {
    iVar3 = 0;
    do {
      iVar2 = HorizontalMatchLength(this,iVar3,iVar4,param_1);
      iVar1 = iVar3 + 1;
      if ((2 < iVar2) || (iVar3 = VerticalMatchLength(this,iVar3,iVar4,param_1), 2 < iVar3)) {
        return 1;
      }
      iVar3 = iVar1;
    } while (iVar1 != 8);
    iVar4 = iVar4 + 1;
    if (iVar4 == 5) {
      return 0;
    }
  } while( true );
}


/* BeghouledModule::IsValidMove(int, int, int, int, BeghouledBoardState*) */

undefined1 __thiscall
BeghouledModule::IsValidMove
          (BeghouledModule *this,int param_1,int param_2,int param_3,int param_4,
          BeghouledBoardState *param_5)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined1 uVar4;
  int iVar5;
  
  if (((((-1 < param_1) && (iVar5 = BoardConstants::NUMBER_OF_COLUMNS(), param_1 < iVar5 + -1)) &&
       (-1 < param_3)) &&
      ((iVar5 = BoardConstants::NUMBER_OF_COLUMNS(), param_3 < iVar5 + -1 && (-1 < param_2)))) &&
     ((iVar5 = BoardConstants::NUMBER_OF_ROWS(), param_2 < iVar5 && -1 < param_4 &&
      (iVar5 = BoardConstants::NUMBER_OF_ROWS(), param_4 < iVar5)))) {
    iVar5 = *(int *)(param_5 + ((long)param_1 * 5 + (long)param_2) * 4);
    if (iVar5 != -1) {
      lVar1 = (long)param_3 * 5 + (long)param_4;
      iVar3 = *(int *)(param_5 + lVar1 * 4);
      if ((iVar5 != 0) && (iVar3 != -1)) {
        lVar2 = (long)param_1 * 5 + (long)param_2;
        *(int *)(param_5 + lVar2 * 4) = iVar3;
        *(int *)(param_5 + lVar1 * 4) = iVar5;
        uVar4 = BoardHasMatch(this,param_5);
        *(int *)(param_5 + lVar2 * 4) = iVar5;
        *(int *)(param_5 + lVar1 * 4) = iVar3;
        return uVar4;
      }
    }
  }
  return 0;
}


/* BeghouledModule::CheckForPossibleMoves(BeghouledBoardState*) */

undefined1 __thiscall
BeghouledModule::CheckForPossibleMoves(BeghouledModule *this,BeghouledBoardState *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  
  lVar5 = 0;
  do {
    iVar4 = (int)lVar5;
    iVar3 = 0;
    do {
      iVar1 = iVar3 + 1;
      cVar2 = IsValidMove(this,iVar3,iVar4,iVar1,iVar4,param_1);
      if (cVar2 != '\0') {
        return 1;
      }
      cVar2 = IsValidMove(this,iVar3,iVar4,iVar3,iVar4 + 1,param_1);
      if (cVar2 != '\0') {
        return 1;
      }
      iVar3 = iVar1;
    } while (iVar1 != 8);
    lVar5 = lVar5 + 1;
    if (lVar5 == 5) {
      return 0;
    }
  } while( true );
}


/* BeghouledModule::PickPlant(int, int, BeghouledBoardState*, bool) */

undefined4 __thiscall
BeghouledModule::PickPlant
          (BeghouledModule *this,int param_1,int param_2,BeghouledBoardState *param_3,bool param_4)

{
  ulong uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  uint uVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  
  uVar11 = *(undefined8 *)(this + 0xa8);
  uVar10 = (uint)param_4;
  lVar14 = (long)param_1;
  lVar12 = (long)param_2;
  lVar5 = FUN_03ba1dc0(uVar11,*(undefined8 *)(this + 0xb0));
  uVar13 = lVar5 - 1;
  lVar5 = -(uVar13 * 4 + 0x12 & 0xfffffffffffffff0);
  if (param_4) {
    uVar9 = 0;
    while( true ) {
      uVar1 = uVar9 + 1;
      uVar10 = (uint)uVar9;
      if (uVar13 < uVar1) break;
      puVar6 = (undefined4 *)FUN_03ba1de8(uVar11,uVar1);
      uVar4 = *puVar6;
      *(undefined4 *)(&stack0xffffffffffffffa0 + uVar9 * 4 + lVar5) = uVar4;
      *(undefined4 *)(param_3 + (lVar14 * 5 + lVar12) * 4) = uVar4;
      uVar9 = uVar1;
    }
  }
  else {
    for (uVar9 = 1; uVar9 <= uVar13; uVar9 = uVar9 + 1) {
      puVar6 = (undefined4 *)FUN_03ba1de8(uVar11,uVar9);
      uVar4 = *puVar6;
      *(undefined4 *)(param_3 + (lVar14 * 5 + lVar12) * 4) = uVar4;
      cVar2 = BoardHasMatch(this,param_3);
      uVar11 = *(undefined8 *)(this + 0xa8);
      uVar8 = *(undefined8 *)(this + 0xb0);
      if (cVar2 == '\0') {
        *(undefined4 *)(&stack0xffffffffffffffa0 + (long)(int)uVar10 * 4 + lVar5) = uVar4;
        uVar10 = uVar10 + 1;
      }
      lVar7 = FUN_03ba1dc0(uVar11,uVar8);
      uVar13 = lVar7 - 1;
    }
  }
  uVar4 = 0;
  *(undefined4 *)(param_3 + (lVar14 * 5 + lVar12) * 4) = 0;
  if (uVar10 != 0) {
    iVar3 = Sexy::Rand(uVar10);
    uVar4 = *(undefined4 *)(&stack0xffffffffffffffa0 + (long)iVar3 * 4 + lVar5);
  }
  return uVar4;
}


/* BeghouledModule::FillHoles(BeghouledBoardState*, bool) */

void __thiscall
BeghouledModule::FillHoles(BeghouledModule *this,BeghouledBoardState *param_1,bool param_2)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar2 = BoardConstants::NUMBER_OF_COLUMNS();
  if (0 < iVar2 + -1) {
    do {
      iVar2 = 0;
      while( true ) {
        iVar4 = iVar2;
        iVar2 = BoardConstants::NUMBER_OF_ROWS();
        lVar1 = (long)iVar5 * 5 + (long)iVar4;
        if (iVar2 <= iVar4) break;
        iVar2 = iVar4 + 1;
        if (*(int *)(param_1 + lVar1 * 4) == 0) {
          uVar3 = PickPlant(this,iVar5,iVar4,param_1,param_2);
          *(undefined4 *)(param_1 + lVar1 * 4) = uVar3;
        }
      }
      iVar2 = BoardConstants::NUMBER_OF_COLUMNS();
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar2 + -1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BeghouledModule::FlashPlant(int, int, int, int, int, int) */

void __thiscall
BeghouledModule::FlashPlant
          (BeghouledModule *this,int param_1,int param_2,int param_3,int param_4,int param_5,
          int param_6)

{
  bool bVar1;
  Plant *this_00;
  int iVar2;
  Board *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((((param_1 != param_3) || (iVar2 = param_6, param_2 != param_4)) &&
      (bVar1 = param_1 == param_5, param_5 = param_1, iVar2 = param_2, bVar1)) &&
     (param_2 == param_6)) {
    param_5 = param_3;
    iVar2 = param_4;
  }
  this_01 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string(asStack_10,"");
  this_00 = (Plant *)Board::GetPlantAt(this_01,param_5,iVar2,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (this_00 != (Plant *)0x0) {
    Plant::SetDamageFlash(this_00,0.25);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* BeghouledModule::FlashFromBoardState(BeghouledBoardState*, int, int, int, int) */

undefined8 __thiscall
BeghouledModule::FlashFromBoardState
          (BeghouledModule *this,BeghouledBoardState *param_1,int param_2,int param_3,int param_4,
          int param_5)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  
  lVar1 = (long)param_2 * 5 + (long)param_3;
  iVar3 = *(int *)(param_1 + lVar1 * 4);
  if (iVar3 != -1) {
    lVar2 = (long)param_4 * 5 + (long)param_5;
    iVar4 = *(int *)(param_1 + lVar2 * 4);
    if (iVar4 != -1) {
      *(int *)(param_1 + lVar1 * 4) = iVar4;
      iVar8 = 0;
      *(int *)(param_1 + lVar2 * 4) = iVar3;
      do {
        iVar7 = 0;
        do {
          iVar5 = HorizontalMatchLength(this,iVar7,iVar8,param_1);
          if (2 < iVar5) {
            FlashPlant(this,iVar7,iVar8,param_2,param_3,param_4,param_5);
            FlashPlant(this,iVar7 + 1,iVar8,param_2,param_3,param_4,param_5);
            iVar7 = iVar7 + 2;
LAB_03ba3e48:
            FlashPlant(this,iVar7,iVar8,param_2,param_3,param_4,param_5);
            uVar6 = 1;
            goto LAB_03ba3dc4;
          }
          iVar5 = VerticalMatchLength(this,iVar7,iVar8,param_1);
          if (2 < iVar5) {
            FlashPlant(this,iVar7,iVar8,param_2,param_3,param_4,param_5);
            FlashPlant(this,iVar7,iVar8 + 1,param_2,param_3,param_4,param_5);
            iVar8 = iVar8 + 2;
            goto LAB_03ba3e48;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 != 8);
        iVar8 = iVar8 + 1;
      } while (iVar8 != 5);
      uVar6 = 0;
LAB_03ba3dc4:
      *(int *)(param_1 + ((long)param_2 * 5 + (long)param_3) * 4) = iVar3;
      *(int *)(param_1 + ((long)param_4 * 5 + (long)param_5) * 4) = iVar4;
      return uVar6;
    }
  }
  return 0;
}


/* BeghouledModule::isPlantPlantfooded(Sexy::RtWeakPtr<Plant>) */

ulong __thiscall
BeghouledModule::isPlantPlantfooded(undefined8 param_1,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  byte bVar1;
  Plant *this;
  long lVar2;
  ulong uVar3;
  code *pcVar4;
  
  this = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  if (*(code **)(*(long *)this + 0x1f8) == Plant::IsInPlantFoodState) {
    bVar1 = Plant::IsInPlantFoodState(this);
  }
  else {
    bVar1 = (**(code **)(*(long *)this + 0x1f8))();
  }
  if (bVar1 != 0) {
    return (ulong)bVar1;
  }
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  pcVar4 = *(code **)(**(long **)(lVar2 + 0xa8) + 0x270);
  if (pcVar4 != PlantFramework::HasPlantfoodShield) {
    bVar1 = (*pcVar4)();
    return (ulong)bVar1;
  }
  uVar3 = PlantFramework::HasPlantfoodShield();
  return uVar3;
}


/* BeghouledModule::resetFlashTimer() */

void __thiscall BeghouledModule::resetFlashTimer(BeghouledModule *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  *(undefined4 *)(this + 0x94) = 0;
  *(float *)(this + 0x90) = fVar1 + 5.0;
  return;
}


/* BeghouledModule::StartFalling(BeghouledGameplayState) */

void __thiscall BeghouledModule::StartFalling(BeghouledModule *this,int param_2)

{
  *(int *)(this + 0x28) = param_2;
  this[0x1b] = (BeghouledModule)(param_2 == 3);
  resetFlashTimer(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BeghouledModule::CreatePlants(BeghouledBoardState*, BeghouledBoardState*) */

void __thiscall
BeghouledModule::CreatePlants
          (BeghouledModule *this,BeghouledBoardState *param_1,BeghouledBoardState *param_2)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  float *pfVar1;
  code *pcVar2;
  BeghouledBoardState *pBVar3;
  Board *this_01;
  int iVar4;
  BeghouledBoardState *pBVar5;
  BeghouledBoardState *pBVar6;
  int iVar7;
  int iVar8;
  BeghouledBoardState *pBVar9;
  float fVar10;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_48;
  Point aPStack_40 [8];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  long local_8;
  
  pBVar3 = param_1 + 0x10;
  local_8 = ___stack_chk_guard;
  pBVar9 = param_2 + 0x10;
  iVar7 = 0;
  do {
    iVar4 = 4;
    iVar8 = 0;
    pBVar5 = pBVar3;
    pBVar6 = pBVar9;
    do {
      if ((*(int *)pBVar5 == 0) && (*(int *)pBVar6 != 0)) {
        this_01 = *(Board **)(gLawnApp + 0x9f0);
        BeghouledTypeToString((BeghouledModule *)&local_38);
        this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   *)Board::AddPlant(this_01,iVar7,iVar4,(string *)&local_38,-1,false,false,false,
                                     false);
        std::string::~string((string *)&local_38);
        pfVar1 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost(this_00);
        pcVar2 = *(code **)(*(long *)this_00 + 0x78);
        EATextSquish::Vec3::Vec3
                  ((Vec3 *)&local_38,*pfVar1,80.0 - (float)(iVar8 + 1) * 100.0,pfVar1[2]);
        (*pcVar2)(this_00,(string *)&local_38);
        RelocationEvent::RelocationEvent((RelocationEvent *)&local_38);
        local_18 = 9;
        Sexy::Point::Point(aPStack_40,iVar7,iVar4);
        fVar10 = (float)Sexy::Rand(0.1);
        local_50 = CONCAT44(uStack_14,local_18);
        local_60 = local_28;
        uStack_58 = uStack_20;
        local_48 = local_10;
        local_70 = local_38;
        uStack_68 = uStack_30;
        Plant::StartRelocate
                  ((Plant *)((1.0 - (float)(3 - iVar8) * 0.1) - fVar10),0,this_00,aPStack_40,
                   &local_70);
        Plant::SetTravellingOutsideGroup((Plant *)this_00,true);
        StartFalling(this,3);
        iVar8 = iVar8 + 1;
      }
      iVar4 = iVar4 + -1;
      pBVar5 = pBVar5 + -4;
      pBVar6 = pBVar6 + -4;
    } while (iVar4 != -1);
    iVar7 = iVar7 + 1;
    pBVar3 = pBVar3 + 0x14;
    pBVar9 = pBVar9 + 0x14;
  } while (iVar7 != 8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BeghouledModule::removeAllMatches() */

void __thiscall BeghouledModule::removeAllMatches(BeghouledModule *this)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  RtWeakPtrBase *pRVar4;
  long *plVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0xd8));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0xd8));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    pRVar4 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_20,pRVar4);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
    (**(code **)(**(long **)(lVar3 + 0xa8) + 0x220))(*(long **)(lVar3 + 0xa8));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0xf0));
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0xf0));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar1) {
    pRVar4 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_28,pRVar4);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)aRStack_28);
    cVar2 = isPlantPlantfooded(this,(RtWeakPtr<Sexy::SoundResource> *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    if (cVar2 == '\0') {
      plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
      (**(code **)(*plVar5 + 0x48))();
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
  }
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x108));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x108));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    pRVar4 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_20,pRVar4);
    plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
    (**(code **)(*plVar5 + 0x48))();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BeghouledModule::updateZombieSpawner() */

void __thiscall BeghouledModule::updateZombieSpawner(BeghouledModule *this)

{
  bool bVar1;
  LevelModule *this_00;
  RtObject *this_01;
  BeghouledZombieSpawnerProperties *pBVar2;
  int *piVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (LevelModule *)FUN_03ba4d88(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  LevelModule::GetPropsPtr(this_00);
  this_01 = (RtObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  pBVar2 = Sexy::RtObject::Cast<BeghouledZombieSpawnerProperties>(this_01);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  local_18 = FUN_03ba44e8(*(undefined8 *)(pBVar2 + 0x58));
  local_10 = FUN_03ba4538(*(undefined8 *)(pBVar2 + 0x60));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    piVar3 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if (piVar3[1] == *(int *)(this + 0x98)) {
      SimpleZombieSpawnerModule::SetActiveStage((SimpleZombieSpawnerModule *)this_00,*piVar3);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BeghouledModule::setToolVisibility() */

void __thiscall BeghouledModule::setToolVisibility(BeghouledModule *this)

{
  undefined *this_00;
  UIWidget *pUVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  SeedBankNew *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIPlantfood");
  pUVar1 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar1 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar1,false);
  }
  std::string::string(asStack_10,"UIShovel");
  pUVar1 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar1 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar1,false);
  }
  this_00 = gMessageRouter;
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  MessageRouter::Broadcast<int,int>
            ((MessageRouter *)this_00,Message::BeghouledProgressMeterSetWinCount,
             *(int *)(pRVar2 + 0x40));
  std::string::string(asStack_10,"UIBeghouledProgressBar");
  pUVar1 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar1 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar1,true);
  }
  this_01 = (SeedBankNew *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
  SeedBankNew::SetAllPacketsReady(this_01);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BeghouledModule::EnableSwapping(bool) */

void __thiscall BeghouledModule::EnableSwapping(BeghouledModule *this,bool param_1)

{
  undefined4 uVar1;
  
  this[0x1a] = (BeghouledModule)param_1;
  if (!param_1) {
    uVar1 = PVZ_EOT();
    *(undefined4 *)(this + 0x90) = uVar1;
    return;
  }
  setToolVisibility(this);
  resetFlashTimer(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BeghouledModule::onClearBoard() */

void BeghouledModule::onClearBoard(void)

{
  bool bVar1;
  undefined8 uVar2;
  RtObject *this;
  long *plVar3;
  int extraout_w1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar2,0x2e);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_38);
    if (bVar1) {
      this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      bVar1 = Sexy::RtObject::IsA<CollectableSeedPacket>(this);
      if (bVar1) {
        plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
        (**(code **)(*plVar3 + 0x48))();
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BeghouledModule::checkWinCondition() */

void __thiscall BeghouledModule::checkWinCondition(BeghouledModule *this)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  ResilienceTutorialIntroProperties *pRVar4;
  undefined8 uVar5;
  Zombie *this_00;
  int extraout_w1;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  iVar1 = *(int *)(this + 0x98);
  local_8 = ___stack_chk_guard;
  pRVar4 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  iVar2 = *(int *)(pRVar4 + 0x40);
  if (iVar2 <= iVar1) {
    EnableSwapping(this,false);
    uVar5 = Sexy::LazySingleton<PVZDB>::GetInstance();
    PVZDB::GetObjectIteratorForTable(aIStack_28,uVar5,0x29);
    while (bVar3 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar3) {
      Sexy::RtDbTable::Iterator::operator*(aIStack_28);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_30);
      Sexy::RtId::~RtId(aRStack_30);
      this_00 = (Zombie *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      Zombie::TakeFatalDamage(this_00,(BoardEntity *)0x0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
    }
    Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 <= iVar1);
}


/* BeghouledModule::BeghouledModule() */

void __thiscall BeghouledModule::BeghouledModule(BeghouledModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetClass_06737630;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x20));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x30));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x60));
  Sexy::Point::Point((Point *)(this + 0xa0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xa8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 200));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xd0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xd8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xf0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x108));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x120));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x138));
  return;
}


/* BeghouledModule::StaticNew() */

BeghouledModule * BeghouledModule::StaticNew(void)

{
  BeghouledModule *this;
  
  this = ::operator_new(0x150);
  BeghouledModule(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BeghouledModule::onLocationCleared(int, int) */

void __thiscall BeghouledModule::onLocationCleared(BeghouledModule *this,int param_1,int param_2)

{
  long *plVar1;
  long *plVar2;
  char *pcVar3;
  Board *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string(asStack_10,"");
  plVar1 = (long *)Board::GetPlantAt(this_00,param_1,param_2,asStack_10);
  std::string::~string(asStack_10);
  nop();
  plVar2 = (long *)FUN_03ba52dc(param_1,param_2);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x48))(plVar1);
  }
  if (plVar2 != (long *)0x0) {
    pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar3,"Play_UI_MiniGame_Beghouled_CraterRemove");
    (**(code **)(*plVar2 + 0x48))(plVar2);
  }
  StartFalling(this,3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BeghouledModule::Shuffle() */

void __thiscall BeghouledModule::Shuffle(BeghouledModule *this)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  char *pcVar4;
  Board *this_00;
  int iVar5;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar5 = 0;
  iVar1 = BoardConstants::NUMBER_OF_COLUMNS();
  if (0 < iVar1 + -1) {
    do {
      iVar1 = 0;
      iVar2 = BoardConstants::NUMBER_OF_ROWS();
      if (0 < iVar2) {
        do {
          this_00 = *(Board **)(gLawnApp + 0x9f0);
          std::string::string(asStack_10,"");
          plVar3 = (long *)Board::GetPlantAt(this_00,iVar5,iVar1,asStack_10);
          std::string::~string(asStack_10);
          nop();
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x48))(plVar3);
          }
          iVar1 = iVar1 + 1;
          iVar2 = BoardConstants::NUMBER_OF_ROWS();
        } while (iVar1 < iVar2);
      }
      iVar1 = BoardConstants::NUMBER_OF_COLUMNS();
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar1 + -1);
  }
  pcVar4 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar4,"Play_UI_MiniGame_Beghouled_Shuffle");
  StartFalling(this,3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BeghouledModule::Score(int, int, int, bool, bool) */

void __thiscall
BeghouledModule::Score
          (BeghouledModule *this,int param_1,int param_2,int param_3,bool param_4,bool param_5)

{
  char cVar1;
  int iVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  AudioMgr *this_00;
  ProfileMgr *this_01;
  PlayerInfo *pPVar4;
  long extraout_x0;
  int iVar5;
  string *psVar6;
  undefined8 uVar7;
  int local_28;
  int local_24;
  string asStack_20 [8];
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardTransforms::GridToBoardSpacePos
            ((BoardTransforms *)(ulong)(uint)param_1,param_2,(int)___stack_chk_guard);
  if (param_4) {
    local_28 = (int)((float)local_28 + 80.0 + (float)(param_3 + -3) * 40.0);
  }
  else {
    local_24 = (int)((float)local_24 + 80.0 + (float)(param_3 + -3) * 40.0);
  }
  *(int *)(this + 0x98) = *(int *)(this + 0x98) + 1;
  updateZombieSpawner(this);
  pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  iVar2 = *(int *)(pRVar3 + 0x40);
  if (*(int *)(this + 0x98) < iVar2) {
    this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar4 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
    if ((pPVar4 == (PlayerInfo *)0x0) ||
       (cVar1 = PlayerInfo::IsMonthlyCardActivated(pPVar4,2), cVar1 == '\0')) {
      uVar7 = 0;
    }
    else {
      uVar7 = 1;
    }
    iVar2 = 5;
    if (!param_5) {
      iVar2 = param_3 + -2 + *(int *)(this + 0x9c);
    }
    iVar5 = iVar2 + 2;
    if (param_3 < 5) {
      iVar5 = iVar2;
    }
    iVar2 = ClampInt(iVar5,1,5);
    if (0 < iVar2) {
      iVar5 = 0;
      do {
        iVar5 = iVar5 + 1;
        psVar6 = *(string **)(gLawnApp + 0x9f0);
        std::string::string(asStack_20,"sun");
        EATextSquish::Vec3::Vec3(aVStack_18,(float)local_28,(float)local_24,0.0);
        Board::AddCollectableWithDefaultMotion(psVar6,(SexyVector3 *)asStack_20);
        nop();
        std::string::~string(asStack_20);
        nop();
        FUN_03ba1da8(extraout_x0 + 0x1f8,uVar7);
      } while (iVar5 != iVar2);
    }
    iVar2 = *(int *)(this + 0x98);
  }
  else {
    *(int *)(this + 0x98) = iVar2;
  }
  MessageRouter::Broadcast<int,int>
            ((MessageRouter *)gMessageRouter,Message::BeghouledProgressMeterSetMatchCount,iVar2);
  *(int *)(this + 0x9c) = *(int *)(this + 0x9c) + 1;
  this_00 = (AudioMgr *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SetRTPCValue(this_00,"Minigame_Beghouled_Cascade",(double)*(int *)(this + 0x9c));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BeghouledModule::~BeghouledModule() */

void __thiscall BeghouledModule::~BeghouledModule(BeghouledModule *this)

{
  *(undefined ***)this = &PTR_GetClass_06737630;
  std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::~vector
            ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)(this + 0x138)
            );
  std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::~vector
            ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)(this + 0x120)
            );
  std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::~vector
            ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)(this + 0x108)
            );
  std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::~vector
            ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)(this + 0xf0))
  ;
  std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::~vector
            ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)(this + 0xd8))
  ;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 200));
  std::vector<BeghouledPlantType,std::allocator<BeghouledPlantType>>::~vector
            ((vector<BeghouledPlantType,std::allocator<BeghouledPlantType>> *)(this + 0xa8));
  std::
  map<std::string,BeghouledPlantType,std::less<std::string>,std::allocator<std::pair<std::string_const,BeghouledPlantType>>>
  ::~map((map<std::string,BeghouledPlantType,std::less<std::string>,std::allocator<std::pair<std::string_const,BeghouledPlantType>>>
          *)(this + 0x60));
  std::
  map<std::string,BeghouledPlantType,std::less<std::string>,std::allocator<std::pair<std::string_const,BeghouledPlantType>>>
  ::~map((map<std::string,BeghouledPlantType,std::less<std::string>,std::allocator<std::pair<std::string_const,BeghouledPlantType>>>
          *)(this + 0x30));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* BeghouledModule::~BeghouledModule() */

void __thiscall BeghouledModule::~BeghouledModule(BeghouledModule *this)

{
  ~BeghouledModule(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BeghouledModule::CalcBeghouledTypeFromPlantType(std::string) */

void __thiscall
BeghouledModule::CalcBeghouledTypeFromPlantType(BeghouledModule *this,string *param_2)

{
  char cVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<std::string,BeghouledPlantType,std::less<std::string>,std::allocator<std::pair<std::string_const,BeghouledPlantType>>>
             ::find((map<std::string,BeghouledPlantType,std::less<std::string>,std::allocator<std::pair<std::string_const,BeghouledPlantType>>>
                     *)(this + 0x30),param_2);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x30));
  cVar1 = std::__exception_ptr::operator==((exception_ptr *)&local_18,(exception_ptr *)&local_10);
  uVar3 = 0;
  if (cVar1 == '\0') {
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    uVar3 = *(undefined4 *)(lVar2 + 8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BeghouledModule::LoadBeghouledBoardState(BeghouledBoardState*) */

void __thiscall
BeghouledModule::LoadBeghouledBoardState(BeghouledModule *this,BeghouledBoardState *param_1)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  int iVar5;
  Board *this_00;
  int iVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar6 = 0;
  iVar2 = BoardConstants::NUMBER_OF_COLUMNS();
  if (0 < iVar2 + -1) {
    do {
      iVar5 = 0;
      iVar2 = BoardConstants::NUMBER_OF_ROWS();
      if (0 < iVar2) {
        do {
          lVar1 = (long)iVar6 * 5 + (long)iVar5;
          *(undefined4 *)(param_1 + lVar1 * 4) = 0;
          this_00 = *(Board **)(gLawnApp + 0x9f0);
          std::string::string(asStack_10,"");
          lVar4 = Board::GetPlantAt(this_00,iVar6,iVar5,asStack_10);
          std::string::~string(asStack_10);
          nop();
          if (lVar4 == 0) {
            lVar4 = FUN_03ba52dc(iVar6,iVar5);
            if (lVar4 != 0) {
              *(undefined4 *)(param_1 + lVar1 * 4) = 0xffffffff;
            }
          }
          else {
            Plant::GetType();
            lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
            FUN_05475d88(asStack_10,lVar4 + 8);
            uVar3 = CalcBeghouledTypeFromPlantType(this,asStack_10);
            *(undefined4 *)(param_1 + lVar1 * 4) = uVar3;
            std::string::~string(asStack_10);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
          }
          iVar5 = iVar5 + 1;
          iVar2 = BoardConstants::NUMBER_OF_ROWS();
        } while (iVar5 < iVar2);
      }
      iVar2 = BoardConstants::NUMBER_OF_COLUMNS();
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar2 + -1);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BeghouledModule::DragUpdate(Sexy::Point) */

void __thiscall BeghouledModule::DragUpdate(BeghouledModule *this,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  float *pfVar6;
  long lVar7;
  Board *pBVar8;
  code *pcVar9;
  float fVar10;
  float fVar11;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined4 local_f8;
  int local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  Point aPStack_e0 [8];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  BeghouledBoardState aBStack_a8 [160];
  long local_8;
  
  iVar1 = *(int *)(this + 0xa4);
  uVar2 = *param_2 - *(uint *)(this + 0xa0);
  local_8 = ___stack_chk_guard;
  uVar3 = param_2[1] - iVar1;
  if ((uVar2 + 9 < 0x13) && (uVar3 + 9 < 0x13)) goto LAB_03ba6eac;
  this[0x19] = (BeghouledModule)0x0;
  BoardTransforms::BoardSpaceToGrid((BoardTransforms *)(ulong)*(uint *)(this + 0xa0),iVar1,iVar1);
  Sexy::Point::Point((Point *)&local_e8);
  if ((int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f)) <
      (int)((uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f))) {
    if ((int)uVar2 < 1) {
      local_e8 = local_f0 + -1;
      local_e4 = local_ec;
    }
    else {
      local_e8 = local_f0 + 1;
      local_e4 = local_ec;
    }
  }
  else {
    local_e8 = local_f0;
    if ((int)uVar3 < 1) {
      local_e4 = local_ec + -1;
    }
    else {
      local_e4 = local_ec + 1;
    }
  }
  LoadBeghouledBoardState(this,aBStack_a8);
  iVar4 = local_ec;
  iVar1 = local_f0;
  pBVar8 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string((string *)&local_d8,"");
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Board::GetPlantAt(pBVar8,iVar1,iVar4,(string *)&local_d8);
  std::string::~string((string *)&local_d8);
  nop();
  cVar5 = IsValidMove(this,local_f0,local_ec,local_e8,local_e4,aBStack_a8);
  iVar4 = local_e4;
  iVar1 = local_e8;
  if (cVar5 != '\0') {
    pBVar8 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string((string *)&local_d8,"");
    lVar7 = Board::GetPlantAt(pBVar8,iVar1,iVar4,(string *)&local_d8);
    std::string::~string((string *)&local_d8);
    nop();
    if ((lVar7 != 0) &&
       (this_00 !=
        (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
         *)0x0)) {
      RelocationEvent::RelocationEvent((RelocationEvent *)&local_d8);
      local_b8 = 8;
      Sexy::Point::Point(aPStack_e0,(TPoint *)&local_e8);
      local_100 = CONCAT44(uStack_b4,local_b8);
      local_120 = local_d8;
      uStack_118 = uStack_d0;
      local_f8 = local_b0;
      local_110 = local_c8;
      uStack_108 = uStack_c0;
      Plant::StartRelocate((Plant *)0x3e800000,0,this_00,aPStack_e0,&local_120);
      Sexy::Point::Point(aPStack_e0,(TPoint *)&local_f0);
      local_100 = CONCAT44(uStack_b4,local_b8);
      local_120 = local_d8;
      uStack_118 = uStack_d0;
      local_f8 = local_b0;
      local_110 = local_c8;
      uStack_108 = uStack_c0;
      Plant::StartRelocate((Plant *)0x3e800000,0,lVar7,aPStack_e0,&local_120);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 200),(RtWeakPtrBase *)aPStack_e0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_e0);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0xd0),(RtWeakPtrBase *)aPStack_e0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_e0);
    }
    StartFalling(this,2);
    goto LAB_03ba6eac;
  }
  if (this_00 ==
      (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
       *)0x0) goto LAB_03ba6eac;
  pfVar6 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(this_00);
  fVar10 = *pfVar6;
  fVar11 = pfVar6[1];
  if (local_f0 < local_e8) {
    lVar7 = *(long *)this_00;
    fVar10 = fVar10 + 30.0;
LAB_03ba70a4:
    pcVar9 = *(code **)(lVar7 + 0x78);
    EATextSquish::Vec3::Vec3((Vec3 *)&local_d8,fVar10,fVar11,pfVar6[2]);
    (*pcVar9)(this_00,(string *)&local_d8);
  }
  else {
    if (local_e8 < local_f0) {
      lVar7 = *(long *)this_00;
      fVar10 = fVar10 - 30.0;
      goto LAB_03ba70a4;
    }
    if (local_ec < local_e4) {
      lVar7 = *(long *)this_00;
      fVar11 = fVar11 + 30.0;
      goto LAB_03ba70a4;
    }
    if (local_e4 < local_ec) {
      lVar7 = *(long *)this_00;
      fVar11 = fVar11 - 30.0;
      goto LAB_03ba70a4;
    }
  }
  RelocationEvent::RelocationEvent((RelocationEvent *)&local_d8);
  local_b8 = 1;
  Sexy::Point::Point(aPStack_e0,(TPoint *)&local_f0);
  local_120 = local_d8;
  uStack_118 = uStack_d0;
  local_100 = CONCAT44(uStack_b4,local_b8);
  local_110 = local_c8;
  uStack_108 = uStack_c0;
  local_f8 = local_b0;
  Plant::StartRelocate((Plant *)0x3e800000,0,this_00,aPStack_e0,&local_120);
LAB_03ba6eac:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BeghouledModule::onTouchEvent(Sexy::Touch const&) */

void __thiscall BeghouledModule::onTouchEvent(BeghouledModule *this,Touch *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  BeghouledModule BVar4;
  Board *this_00;
  uint local_20;
  int local_1c;
  int local_18;
  int local_14;
  Point aPStack_10 [8];
  long local_8;
  
  BVar4 = this[0x1a];
  local_8 = ___stack_chk_guard;
  if (BVar4 != (BeghouledModule)0x0) {
    if (*(int *)(param_1 + 0x30) == 0) {
      if (*(int *)(this + 0x28) == 1) {
        iVar1 = FUN_03ba25b8(*(undefined4 *)(param_1 + 0x10));
        iVar2 = FUN_03ba25b8(*(undefined4 *)(param_1 + 0x14));
        Sexy::Point::Point((Point *)&local_20,iVar1,iVar2);
        BoardTransforms::BoardSpaceToGrid((BoardTransforms *)(ulong)local_20,local_1c,iVar2);
        this_00 = *(Board **)(gLawnApp + 0x9f0);
        std::string::string((string *)aPStack_10,"");
        lVar3 = Board::GetPlantAt(this_00,local_18,local_14,(string *)aPStack_10);
        std::string::~string((string *)aPStack_10);
        nop();
        if (lVar3 == 0) {
          BVar4 = (BeghouledModule)0x0;
        }
        else {
          Sexy::Point::Point(aPStack_10,(TPoint *)&local_20);
          DragStart(this,(string *)aPStack_10);
        }
      }
      else {
        BVar4 = (BeghouledModule)0x0;
      }
    }
    else if (*(int *)(param_1 + 0x30) == 1) {
      BVar4 = this[0x19];
      if (BVar4 != (BeghouledModule)0x0) {
        iVar1 = FUN_03ba25b8(*(undefined4 *)(param_1 + 0x10));
        iVar2 = FUN_03ba25b8(*(undefined4 *)(param_1 + 0x14));
        Sexy::Point::Point((Point *)&local_18,iVar1,iVar2);
        Sexy::Point::Point(aPStack_10,(TPoint *)&local_18);
        DragUpdate(this,aPStack_10);
      }
    }
    else {
      BVar4 = (BeghouledModule)0x0;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(BVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BeghouledModule::CheckStuckState() */

void __thiscall BeghouledModule::CheckStuckState(BeghouledModule *this)

{
  char cVar1;
  BeghouledBoardState aBStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x28) == 1) {
    LoadBeghouledBoardState(this,aBStack_a8);
    cVar1 = CheckForPossibleMoves(this,aBStack_a8);
    if (cVar1 == '\0') {
      *(undefined4 *)(this + 0x28) = 4;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BeghouledModule::onPlantDied(Plant*) */

void __thiscall BeghouledModule::onPlantDied(BeghouledModule *this,Plant *param_1)

{
  Board *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string(asStack_10,"crater");
  Board::AddGridItem(this_00,asStack_10,*(int *)(param_1 + 0x114),*(int *)(param_1 + 0x110),1);
  std::string::~string(asStack_10);
  nop();
  CheckStuckState(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BeghouledModule::PopulateBoard() */

void __thiscall BeghouledModule::PopulateBoard(BeghouledModule *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  BeghouledBoardState aBStack_148 [160];
  BeghouledBoardState aBStack_a8 [160];
  long local_8;
  
  iVar3 = 2;
  local_8 = ___stack_chk_guard;
  LoadBeghouledBoardState(this,aBStack_148);
  bVar1 = (bool)BoardHasMatch(this,aBStack_148);
  while( true ) {
    LoadBeghouledBoardState(this,aBStack_a8);
    FillHoles(this,aBStack_a8,bVar1);
    cVar2 = CheckForPossibleMoves(this,aBStack_a8);
    if ((cVar2 != '\0') || (iVar3 == 1)) break;
    iVar3 = 1;
  }
  CreatePlants(this,aBStack_148,aBStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BeghouledModule::FlashAMatch() */

void __thiscall BeghouledModule::FlashAMatch(BeghouledModule *this)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  Board *pBVar5;
  int iVar6;
  long lVar7;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  BeghouledBoardState aBStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x98) == 0) {
    pBVar5 = *(Board **)(gLawnApp + 0x9f0);
    FUN_05478178(auStack_b0,L"[ADVICE_SWAP_PLANTS]",auStack_b8);
    Board::DisplayAdvice(pBVar5,auStack_b0,7,2);
    FUN_05476c50(auStack_b0);
    nop();
  }
  lVar7 = 0;
  iVar6 = 0;
  LoadBeghouledBoardState(this,aBStack_a8);
  do {
    iVar1 = (int)lVar7 + 1;
    iVar4 = 0;
    do {
      iVar2 = iVar4 + 1;
      cVar3 = FlashFromBoardState(this,aBStack_a8,iVar4,iVar6,iVar2,iVar6);
      if ((cVar3 != '\0') ||
         (cVar3 = FlashFromBoardState(this,aBStack_a8,iVar4,iVar6,iVar4,iVar1), cVar3 != '\0'))
      goto LAB_03ba7728;
      iVar4 = iVar2;
    } while (iVar2 != 7);
    cVar3 = FlashFromBoardState(this,aBStack_a8,7,iVar6,7,iVar1);
    if (cVar3 != '\0') goto LAB_03ba7728;
    lVar7 = lVar7 + 1;
    iVar6 = (int)lVar7;
  } while (lVar7 != 4);
  iVar6 = 0;
  do {
    iVar1 = iVar6 + 1;
    cVar3 = FlashFromBoardState(this,aBStack_a8,iVar6,4,iVar1,4);
    if (cVar3 != '\0') break;
    iVar6 = iVar1;
  } while (iVar1 != 7);
LAB_03ba7728:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BeghouledModule::FallIntoSquare(int, int, BeghouledBoardState*) */

void __thiscall
BeghouledModule::FallIntoSquare
          (BeghouledModule *this,int param_1,int param_2,BeghouledBoardState *param_3)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  Board *this_00;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  Point aPStack_40 [8];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(int *)(param_3 + ((long)param_1 * 5 + (long)param_2) * 4) != -1) &&
     (iVar4 = param_2 + -1, -1 < iVar4)) {
    do {
      this_00 = *(Board **)(gLawnApp + 0x9f0);
      std::string::string((string *)&local_38,"");
      lVar3 = Board::GetPlantAt(this_00,param_1,iVar4,(string *)&local_38);
      std::string::~string((string *)&local_38);
      nop();
      if (lVar3 != 0) {
        lVar1 = (long)param_1 * 5;
        RelocationEvent::RelocationEvent((RelocationEvent *)&local_38);
        local_18 = 1;
        Sexy::Point::Point(aPStack_40,param_1,param_2);
        local_60 = CONCAT44(uStack_14,local_18);
        local_58 = local_10;
        local_80 = local_38;
        uStack_78 = uStack_30;
        local_70 = local_28;
        uStack_68 = uStack_20;
        Plant::StartRelocate((Plant *)0x3f000000,0,lVar3,aPStack_40,&local_80);
        Plant::GetType();
        lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
        FUN_05475d88(aPStack_40,lVar3 + 8);
        uVar2 = CalcBeghouledTypeFromPlantType(this,aPStack_40);
        *(undefined4 *)(param_3 + (lVar1 + param_2) * 4) = uVar2;
        std::string::~string((string *)aPStack_40);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
        *(undefined4 *)(param_3 + (lVar1 + iVar4) * 4) = 0;
        StartFalling(this,3);
        break;
      }
      iVar4 = iVar4 + -1;
    } while (iVar4 != -1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BeghouledModule::MakePlantsFall(BeghouledBoardState*) */

void __thiscall BeghouledModule::MakePlantsFall(BeghouledModule *this,BeghouledBoardState *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 4;
  do {
    iVar2 = 0;
    do {
      while (iVar1 = GetPlantAt(this,iVar2,iVar3,param_1), iVar1 == 0) {
        iVar1 = iVar2 + 1;
        FallIntoSquare(this,iVar2,iVar3,param_1);
        iVar2 = iVar1;
        if (iVar1 == 8) goto LAB_03ba79e8;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != 8);
LAB_03ba79e8:
    iVar3 = iVar3 + -1;
    if (iVar3 == -1) {
      return;
    }
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BeghouledModule::calcCrossingPlants() */

void __thiscall BeghouledModule::calcCrossingPlants(BeghouledModule *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *pvVar1;
  bool bVar2;
  RtWeakPtrBase *pRVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x138);
  local_8 = ___stack_chk_guard;
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x120));
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x120));
  pvVar1 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            *)(this + 0xd8);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20), bVar2) {
    pRVar3 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,pRVar3);
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(pvVar1);
    uVar4 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(pvVar1);
    uVar5 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(pvVar1);
    local_10 = std::
               find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<Plant>*,std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>>,Sexy::RtWeakPtr<Plant>>
                         (uVar4,uVar5,aRStack_30);
    bVar2 = __gnu_cxx::operator==((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (bVar2) {
      uVar4 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin(this_00);
      uVar5 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end(this_00);
      local_18 = std::
                 find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<Plant>*,std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>>,Sexy::RtWeakPtr<Plant>>
                           (uVar4,uVar5,aRStack_30);
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_10,(__normal_iterator *)&local_18);
      if (bVar2) {
        std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::push_back
                  ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)pvVar1,
                   (RtWeakPtr *)aRStack_30);
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_10,(__normal_iterator *)&local_18);
        std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::erase
                  ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)this_00,
                   local_10);
      }
      else {
        std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::push_back
                  ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)
                   (this + 0xf0),(RtWeakPtr *)aRStack_30);
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_28);
  }
  pvVar1 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            *)(this + 0xd8);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20), bVar2) {
    pRVar3 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,pRVar3);
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(pvVar1);
    uVar4 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(pvVar1);
    uVar5 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(pvVar1);
    local_10 = std::
               find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<Plant>*,std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>>,Sexy::RtWeakPtr<Plant>>
                         (uVar4,uVar5,aRStack_30);
    bVar2 = __gnu_cxx::operator==((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (bVar2) {
      std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::push_back
                ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)
                 (this + 0xf0),(RtWeakPtr *)aRStack_30);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BeghouledModule::updateBoardForUpgradedPlant(BeghouledPlantType) */

void __thiscall
BeghouledModule::updateBoardForUpgradedPlant(BeghouledModule *this,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  int *piVar6;
  Board *pBVar7;
  int iVar8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  iVar8 = 0;
  local_8 = ___stack_chk_guard;
  iVar1 = BoardConstants::NUMBER_OF_COLUMNS();
  if (0 < iVar1 + -1) {
    do {
      iVar1 = 0;
      iVar2 = BoardConstants::NUMBER_OF_ROWS();
      if (0 < iVar2) {
        do {
          pBVar7 = *(Board **)(gLawnApp + 0x9f0);
          std::string::string(asStack_10,"");
          plVar4 = (long *)Board::GetPlantAt(pBVar7,iVar8,iVar1,asStack_10);
          std::string::~string(asStack_10);
          nop();
          if (plVar4 != (long *)0x0) {
            Plant::GetType();
            lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
            FUN_05475d88(asStack_18,lVar5 + 8);
            iVar3 = CalcBeghouledTypeFromPlantType(this,asStack_18);
            BeghouledTypeToString((BeghouledModule *)asStack_10,param_2);
            piVar6 = (int *)std::
                            map<std::string,BeghouledPlantType,std::less<std::string>,std::allocator<std::pair<std::string_const,BeghouledPlantType>>>
                            ::operator[]((map<std::string,BeghouledPlantType,std::less<std::string>,std::allocator<std::pair<std::string_const,BeghouledPlantType>>>
                                          *)(this + 0x60),asStack_10);
            iVar2 = *piVar6;
            std::string::~string(asStack_10);
            std::string::~string(asStack_18);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
            if (iVar3 == iVar2) {
              (**(code **)(*plVar4 + 0x48))(plVar4);
              pBVar7 = *(Board **)(gLawnApp + 0x9f0);
              BeghouledTypeToString((BeghouledModule *)asStack_10,param_2);
              Board::AddPlant(pBVar7,iVar8,iVar1,asStack_10,-1,false,false,false,false);
              std::string::~string(asStack_10);
            }
          }
          iVar1 = iVar1 + 1;
          iVar2 = BoardConstants::NUMBER_OF_ROWS();
        } while (iVar1 < iVar2);
      }
      iVar1 = BoardConstants::NUMBER_OF_COLUMNS();
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar1 + -1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BeghouledModule::InitPlantMap() */

void __thiscall BeghouledModule::InitPlantMap(BeghouledModule *this)

{
  int *piVar1;
  int local_14;
  string asStack_10 [8];
  long local_8;
  
  local_14 = 1;
  local_8 = ___stack_chk_guard;
  do {
    BeghouledTypeToString((BeghouledModule *)asStack_10,local_14);
    piVar1 = (int *)std::
                    map<std::string,BeghouledPlantType,std::less<std::string>,std::allocator<std::pair<std::string_const,BeghouledPlantType>>>
                    ::operator[]((map<std::string,BeghouledPlantType,std::less<std::string>,std::allocator<std::pair<std::string_const,BeghouledPlantType>>>
                                  *)(this + 0x30),asStack_10);
    *piVar1 = local_14;
    std::string::~string(asStack_10);
    FUN_03ba25e0(&local_14);
  } while (local_14 < 0x4f);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BeghouledModule::InitPlantUpgradeMap() */

void __thiscall BeghouledModule::InitPlantUpgradeMap(BeghouledModule *this)

{
  bool bVar1;
  undefined4 uVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  LogCacheInfo *pLVar4;
  undefined4 *puVar5;
  undefined8 local_30;
  undefined8 local_28;
  string asStack_20 [8];
  LogCacheInfo aLStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  local_30 = FUN_03ba45e8(*(undefined8 *)(pRVar3 + 0x60));
  local_28 = FUN_03ba4638(*(undefined8 *)(pRVar3 + 0x68));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1) {
    pLVar4 = (LogCacheInfo *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30)
    ;
    LogCacheInfo::LogCacheInfo(aLStack_18,pLVar4);
    puVar5 = (undefined4 *)
             std::
             map<std::string,BeghouledPlantType,std::less<std::string>,std::allocator<std::pair<std::string_const,BeghouledPlantType>>>
             ::operator[]((map<std::string,BeghouledPlantType,std::less<std::string>,std::allocator<std::pair<std::string_const,BeghouledPlantType>>>
                           *)(this + 0x60),asStack_10);
    FUN_05475d88(asStack_20,aLStack_18);
    uVar2 = CalcBeghouledTypeFromPlantType(this,asStack_20);
    *puVar5 = uVar2;
    std::string::~string(asStack_20);
    Sexy::PACommand::~PACommand((PACommand *)aLStack_18);
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_30);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BeghouledModule::CacheMatch(int, int, BeghouledBoardState*, int, bool, bool&) */

void __thiscall
BeghouledModule::CacheMatch
          (BeghouledModule *this,int param_1,int param_2,BeghouledBoardState *param_3,int param_4,
          bool param_5,bool *param_6)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  BeghouledModule *this_01;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  Board *this_02;
  Plant *local_50;
  undefined8 local_48;
  undefined8 local_40;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  *param_6 = false;
  bVar3 = false;
  iVar4 = GetPlantAt(this,param_1,param_2,param_3);
  iVar8 = param_1;
  iVar9 = param_2;
  do {
    this_02 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string((string *)&local_28,"");
    local_50 = (Plant *)Board::GetPlantAt(this_02,iVar8,iVar9,(string *)&local_28);
    std::string::~string((string *)&local_28);
    nop();
    if (param_5) {
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_28,(RtWeakPtrBase *)&local_30);
      this_01 = this + 0x120;
    }
    else {
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_28,(RtWeakPtrBase *)&local_30);
      this_01 = this + 0x138;
    }
    std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::push_back
              ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)this_01,
               (RtWeakPtr *)&local_28);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
    if (param_4 < 4) goto LAB_03ba89c8;
    ToolPacketData::GetProps();
    cVar2 = Sexy::RtWeakPtrBase::operator==
                      ((RtWeakPtrBase *)&local_30,(RtWeakPtrBase *)(this + 200));
    if (cVar2 == '\0') {
      ToolPacketData::GetProps();
      cVar2 = Sexy::RtWeakPtrBase::operator==
                        ((RtWeakPtrBase *)&local_28,(RtWeakPtrBase *)(this + 0xd0));
      if (cVar2 != '\0') {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
        goto LAB_03ba8ad4;
      }
      if (this[0x1b] != (BeghouledModule)0x0) {
        if (param_5) {
          bVar1 = iVar8 == param_1;
        }
        else {
          bVar1 = iVar9 == param_2;
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
        if (!bVar1) goto LAB_03ba89c8;
        goto LAB_03ba8adc;
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
    }
    else {
LAB_03ba8ad4:
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
LAB_03ba8adc:
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_28,(RtWeakPtrBase *)&local_30);
      std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::push_back
                ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)
                 (this + 0xd8),(RtWeakPtr *)&local_28);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
    }
LAB_03ba89c8:
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_28,(RtWeakPtrBase *)&local_30);
    cVar2 = isPlantPlantfooded(this,(string *)&local_28);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
    if (cVar2 == '\0') {
      bVar3 = true;
    }
    else {
      std::vector<Plant*,std::allocator<Plant*>>::push_back
                ((vector<Plant*,std::allocator<Plant*>> *)avStack_20,&local_50);
    }
    if (param_5) {
      iVar8 = iVar8 + 1;
    }
    else {
      iVar9 = iVar9 + 1;
    }
    iVar5 = GetPlantAt(this,iVar8,iVar9,param_3);
    if (iVar4 != iVar5) {
      if (!bVar3) {
        this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)(this + 0x108);
        local_48 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)avStack_20);
        local_40 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)avStack_20);
        while (bVar3 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40),
              bVar3) {
          std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
          uVar6 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin(this_00);
          uVar7 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end(this_00);
          ToolPacketData::GetProps();
          local_30 = std::
                     find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<Plant>*,std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>>,Sexy::RtWeakPtr<GameObject>>
                               (uVar6,uVar7,aRStack_38);
          local_28 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::end(this_00);
          bVar3 = __gnu_cxx::operator==
                            ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
          if (bVar3) {
            ToolPacketData::GetProps();
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)&local_28,(RtWeakPtrBase *)&local_30);
            std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::push_back
                      ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)
                       this_00,(RtWeakPtr *)&local_28);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
          }
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_48);
        }
        *param_6 = true;
      }
      std::vector<Plant*,std::allocator<Plant*>>::~vector
                ((vector<Plant*,std::allocator<Plant*>> *)avStack_20);
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BeghouledModule::RemoveMatches(BeghouledBoardState*) */

void __thiscall BeghouledModule::RemoveMatches(BeghouledModule *this,BeghouledBoardState *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  BeghouledBoardState *pBVar6;
  int iVar7;
  BeghouledBoardState *pBVar8;
  bool local_9;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar7 = 0;
  bVar2 = false;
  std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::clear
            ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)(this + 0xd8))
  ;
  std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::clear
            ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)(this + 0xf0))
  ;
  std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::clear
            ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)(this + 0x108)
            );
  std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::clear
            ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)(this + 0x120)
            );
  std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::clear
            ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)(this + 0x138)
            );
  pBVar8 = param_1;
  do {
    pBVar6 = pBVar8;
    iVar5 = 0;
    do {
      while (*(int *)pBVar6 == -1) {
LAB_03ba8d34:
        iVar5 = iVar5 + 1;
        pBVar6 = pBVar6 + 0x14;
        if (iVar5 == 8) goto LAB_03ba8e28;
      }
      iVar3 = HorizontalMatchLength(this,iVar5,iVar7,param_1);
      if (iVar3 < 3) {
        iVar3 = VerticalMatchLength(this,iVar5,iVar7,param_1);
      }
      else {
        local_9 = false;
        bVar2 = true;
        CacheMatch(this,iVar5,iVar7,param_1,iVar3,true,&local_9);
        Score(this,iVar5,iVar7,iVar3,true,local_9);
        iVar3 = VerticalMatchLength(this,iVar5,iVar7,param_1);
      }
      if (iVar3 < 3) goto LAB_03ba8d34;
      local_9 = false;
      bVar2 = true;
      pBVar6 = pBVar6 + 0x14;
      CacheMatch(this,iVar5,iVar7,param_1,iVar3,false,&local_9);
      iVar1 = iVar5 + 1;
      Score(this,iVar5,iVar7,iVar3,false,local_9);
      iVar5 = iVar1;
    } while (iVar1 != 8);
LAB_03ba8e28:
    iVar7 = iVar7 + 1;
    pBVar8 = pBVar8 + 4;
    if (iVar7 == 5) {
      calcCrossingPlants(this);
      removeAllMatches(this);
      Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)(this + 200));
      Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)(this + 0xd0));
      if (bVar2) {
        pcVar4 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
        AudioMgr::SendEvent(pcVar4,"Play_UI_MiniGame_Beghouled_Match");
      }
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BeghouledModule::onUpdate() */

void __thiscall BeghouledModule::onUpdate(BeghouledModule *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  Board *this_00;
  int iVar6;
  float fVar7;
  string asStack_150 [8];
  BeghouledBoardState aBStack_148 [160];
  BeghouledBoardState aBStack_a8 [160];
  long local_8;
  
  iVar6 = 0;
  local_8 = ___stack_chk_guard;
  bVar1 = false;
  iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
  if (0 < iVar3 + -1) {
    do {
      iVar3 = 0;
      iVar4 = BoardConstants::NUMBER_OF_ROWS();
      if (0 < iVar4) {
        do {
          this_00 = *(Board **)(gLawnApp + 0x9f0);
          std::string::string(asStack_150,"");
          lVar5 = Board::GetPlantAt(this_00,iVar6,iVar3,asStack_150);
          std::string::~string(asStack_150);
          nop();
          if ((lVar5 != 0) && (cVar2 = FUN_03ba1d9c(*(undefined4 *)(lVar5 + 0x1d0)), cVar2 != '\0'))
          {
            bVar1 = true;
          }
          iVar3 = iVar3 + 1;
          iVar4 = BoardConstants::NUMBER_OF_ROWS();
        } while (iVar3 < iVar4);
      }
      iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar3 + -1);
  }
  switch(*(undefined4 *)(this + 0x28)) {
  case 0:
    if (this[0x18] == (BeghouledModule)0x0) {
      this[0x18] = (BeghouledModule)0x1;
      Board::PausePlantGrowthAndDecay(*(Board **)(gLawnApp + 0x9f0),true);
      LoadBeghouledBoardState(this,aBStack_148);
      LoadBeghouledBoardState(this,aBStack_a8);
      FillHoles(this,aBStack_a8,false);
      CreatePlants(this,aBStack_148,aBStack_a8);
    }
    break;
  case 1:
    fVar7 = (float)PVZ_T();
    if ((*(float *)(this + 0x90) <= fVar7) && (this[0x1a] != (BeghouledModule)0x0)) {
      FlashAMatch(this);
      iVar6 = *(int *)(this + 0x94);
      *(int *)(this + 0x94) = iVar6 + 1;
      if (iVar6 + 1 < 5) {
        fVar7 = (float)PVZ_T();
        *(float *)(this + 0x90) = fVar7 + 0.25;
      }
      else {
        resetFlashTimer(this);
      }
    }
    break;
  case 2:
  case 3:
    if (!bVar1) {
      *(undefined4 *)(this + 0x28) = 1;
      resetFlashTimer(this);
      LoadBeghouledBoardState(this,aBStack_a8);
      RemoveMatches(this,aBStack_a8);
      LoadBeghouledBoardState(this,aBStack_a8);
      MakePlantsFall(this,aBStack_a8);
      PopulateBoard(this);
      if (*(int *)(this + 0x28) != 3) {
        *(undefined4 *)(this + 0x9c) = 0;
        CheckStuckState(this);
      }
    }
    break;
  case 4:
    Shuffle(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BeghouledModule::StaticClassInit() */

void BeghouledModule::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  undefined4 local_38 [2];
  pair<std::string,unsigned_int> apStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  local_38[0] = 0xffffffff;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"BEGHOULED_Crater",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"BEGHOULED_Empty_Spot",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 1;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"BEGHOULED_Peashooter",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 2;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"BEGHOULED_Wallnut",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 3;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"BEGHOULED_Cabbagepult",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 4;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"BEGHOULED_Puffshroom",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 5;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"BEGHOULED_LightningReed",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 6;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"BEGHOULED_FirePeashooter",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 7;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"BEGHOULED_Repeater",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 8;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"BEGHOULED_Threepeater",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 9;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"BEGHOULED_Tallnut",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 10;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"BEGHOULED_Endurian",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0xb;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"BEGHOULED_Pepperpult",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0xc;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"BEGHOULED_Melonpult",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0xd;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"BEGHOULED_Wintermelon",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0xe;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"BEGHOULED_Fumeshroom",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0xf;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"BEGHOULED_LaserBean",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0x11;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"BEGHOULED_Iceburg",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0x12;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"BEGHOULED_Stallia",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0x13;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"BEGHOULED_PrimalPeashooter",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0x14;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"BEGHOULED_Kernelpult",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0x15;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"BEGHOULED_Akee",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0x16;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"BEGHOULED_XShot",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0x17;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"BEGHOULED_Starfruit",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0x18;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"BEGHOULED_Snapdragon",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0x19;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"BEGHOULED_ColdSnapdragon",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0x1a;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"BEGHOULED_SunBean",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0x1b;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"BEGHOULED_Hypnoshroom",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0x1c;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"BEGHOULED_Stunion",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0x1d;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"BEGHOULED_LavaGuava",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0x1e;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"BEGHOULED_Violet",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0x1f;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"BEGHOULED_Shadowshroom",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0x20;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"BEGHOULED_Bloomerang",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0x21;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"BEGHOULED_BonkChoy",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0x22;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"BEGHOULED_Spikeweed",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0x23;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"BEGHOULED_Spikerock",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0x24;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"BEGHOULED_SpringBean",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0x25;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"BEGHOULED_SplitPea",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0x26;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"BEGHOULED_Torchwood",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0x27;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"BEGHOULED_Citron",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0x28;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"BEGHOULED_Infinut",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0x29;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"BEGHOULED_Peanut",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0x2a;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"BEGHOULED_Magnetshroom",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0x2b;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"BEGHOULED_Chomper",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0x2c;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"BEGHOULED_BowlingBulb",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0x2d;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"BEGHOULED_HomingThistle",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0x2e;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"BEGHOULED_ChardGuard",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0x2f;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"BEGHOULED_RedStinger",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0x30;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"BEGHOULED_Toadstool",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0x31;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"BEGHOULED_Cactus",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0x32;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"BEGHOULED_PhatBeet",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0x33;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"BEGHOULED_Garlic",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0x34;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"BEGHOULED_PrimalWallnut",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0x35;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"BEGHOULED_Nightshade",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0x36;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"BEGHOULED_Dusklobber",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0x37;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"BEGHOULED_Guacodile",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0x38;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"BEGHOULED_CoconutCannon",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0x39;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"BEGHOULED_MagnifyingGrass",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0x3a;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"BEGHOULED_GhostPepper",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0x3b;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"BEGHOULED_JackOLantern",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0x3c;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"BEGHOULED_Dandelion",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0x3d;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"BEGHOULED_BloomingHeart",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0x3e;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"BEGHOULED_SweetPotato",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0x3f;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"BEGHOULED_Moonflower",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0x40;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"BEGHOULED_Sunshroom",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0x41;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"BEGHOULED_Sunflower",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0x42;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"BEGHOULED_PrimalSunflower",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0x43;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"BEGHOULED_TwinSunflower",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0x44;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"BEGHOULED_WasabiWhip",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0x45;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"BEGHOULED_ExplodeONut",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0x46;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"BEGHOULED_Aloe",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0x47;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"BEGHOULED_Kiwibeast",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0x48;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"BEGHOULED_AppleMortar",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0x49;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"BEGHOULED_WitchHazel",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0x4a;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"BEGHOULED_Pokra",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0x4b;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"BEGHOULED_Shadowpeashooter",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0x4c;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"BEGHOULED_ShadowVanilla",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0x4d;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"BEGHOULED_Electricpeashooter",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0x4e;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"BEGHOULED_SnowPea",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x20);
    std::string::string((string *)apStack_30,"BeghouledPlantType");
    (*pcVar3)(plVar2,apStack_30,avStack_20,0);
    std::string::~string((string *)apStack_30);
    nop();
  }
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  ~vector((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
           *)avStack_20);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  local_38[0] = 0;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"BeghouledInitializing",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 1;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"BeghouledPlaying",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 2;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"BeghouledMovingPlants",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 3;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"BeghouledFillingHoles",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 4;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"BeghouledNoMatches",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x20);
    std::string::string((string *)apStack_30,"BeghouledGameplayState");
    (*pcVar3)(plVar2,apStack_30,avStack_20,0);
    std::string::~string((string *)apStack_30);
    nop();
  }
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  ~vector((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
           *)avStack_20);
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"BeghouledModule");
    (*pcVar3)(plVar2,avStack_20,FUN_03baa544,0x150,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BeghouledModule::StaticGetClass() */

long * BeghouledModule::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"BeghouledModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BeghouledModule::GetClass() const */

long * BeghouledModule::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"BeghouledModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BeghouledModule::postInitialize() */

void __thiscall BeghouledModule::postInitialize(BeghouledModule *this)

{
  bool bVar1;
  long lVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 local_2c;
  string asStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = FUN_03ba4cdc(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (lVar2 != 0) {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x20),(RtWeakPtrBase *)local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
  }
  FUN_03ba224c(*(long *)(gLawnApp + 0x9f0) + 0xc24);
  Board::SetSunMoney(*(Board **)(gLawnApp + 0x9f0),0);
  InitPlantMap(this);
  InitPlantUpgradeMap(this);
  *(undefined4 *)(this + 0x28) = 0;
  this[0x18] = (BeghouledModule)0x0;
  this[0x1a] = (BeghouledModule)0x0;
  *(undefined4 *)(this + 0xc0) = 0;
  uVar5 = PVZ_EOT();
  *(undefined4 *)(this + 0x94) = 0;
  *(undefined4 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0x9c) = 0;
  *(undefined4 *)(this + 0x90) = uVar5;
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)(this + 200));
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)(this + 0xd0));
  local_10[0] = 0;
  std::vector<BeghouledPlantType,std::allocator<BeghouledPlantType>>::push_back
            ((vector<BeghouledPlantType,std::allocator<BeghouledPlantType>> *)(this + 0xa8),
             (BeghouledPlantType *)local_10);
  pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  local_20 = FUN_03ba4338(*(undefined8 *)(pRVar3 + 0x48));
  local_18 = FUN_03ba4388(*(undefined8 *)(pRVar3 + 0x50));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar1) {
    uVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    FUN_05475d88(asStack_28,uVar4);
    FUN_05475d88((RtWeakPtr<Sexy::ResourceInfo> *)local_10,asStack_28);
    local_2c = CalcBeghouledTypeFromPlantType(this,(RtWeakPtr<Sexy::ResourceInfo> *)local_10);
    std::vector<BeghouledPlantType,std::allocator<BeghouledPlantType>>::push_back
              ((vector<BeghouledPlantType,std::allocator<BeghouledPlantType>> *)(this + 0xa8),
               (BeghouledPlantType *)&local_2c);
    std::string::~string((string *)local_10);
    std::string::~string(asStack_28);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BeghouledModule::updateSeedBank(BeghouledPlantType) */

void __thiscall BeghouledModule::updateSeedBank(BeghouledModule *this,int param_2)

{
  map<std::string,BeghouledPlantType,std::less<std::string>,std::allocator<std::pair<std::string_const,BeghouledPlantType>>>
  *this_00;
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  SeedBankModule *pSVar4;
  int *piVar5;
  long lVar6;
  undefined8 uVar7;
  SeedBankNew *this_01;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  string asStack_20 [24];
  long local_8;
  
  this_00 = (map<std::string,BeghouledPlantType,std::less<std::string>,std::allocator<std::pair<std::string_const,BeghouledPlantType>>>
             *)(this + 0x60);
  local_8 = ___stack_chk_guard;
  pSVar4 = (SeedBankModule *)Board::GetSeedBankModule(*(Board **)(gLawnApp + 0x9f0));
  BeghouledTypeToString((BeghouledModule *)asStack_20,param_2);
  piVar5 = (int *)std::
                  map<std::string,BeghouledPlantType,std::less<std::string>,std::allocator<std::pair<std::string_const,BeghouledPlantType>>>
                  ::operator[](this_00,asStack_20);
  iVar1 = *piVar5;
  std::string::~string(asStack_20);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_20);
  local_30 = std::
             map<std::string,BeghouledPlantType,std::less<std::string>,std::allocator<std::pair<std::string_const,BeghouledPlantType>>>
             ::begin(this_00);
  while( true ) {
    local_28 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)this_00);
    bVar2 = eastl::operator!=((rbtree_iterator *)&local_30,(rbtree_iterator *)&local_28);
    if (!bVar2) break;
    lVar6 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_30);
    if (iVar1 == *(int *)(lVar6 + 8)) {
      FUN_05475d88((string *)&local_28,lVar6);
      uVar3 = CalcBeghouledTypeFromPlantType(this,(string *)&local_28);
      local_38 = CONCAT44(local_38._4_4_,uVar3);
      std::vector<BeghouledPlantType,std::allocator<BeghouledPlantType>>::push_back
                ((vector<BeghouledPlantType,std::allocator<BeghouledPlantType>> *)asStack_20,
                 (BeghouledPlantType *)&local_38);
      std::string::~string((string *)&local_28);
    }
    FUN_03ba1df0((rbtree_iterator *)&local_30);
  }
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)asStack_20);
  do {
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)asStack_20);
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_40,(__normal_iterator *)&local_28);
    if (!bVar2) {
      this_01 = (SeedBankNew *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
      (**(code **)(*(long *)this_01 + 0x1c8))();
      SeedBankNew::SetAllPacketsReady(this_01);
      Board::AddSunMoney(*(Board **)(gLawnApp + 0x9f0),0);
      std::vector<BeghouledPlantType,std::allocator<BeghouledPlantType>>::~vector
                ((vector<BeghouledPlantType,std::allocator<BeghouledPlantType>> *)asStack_20);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    piVar5 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    iVar1 = *piVar5;
    if (iVar1 == param_2) {
      local_38 = std::
                 map<std::string,BeghouledPlantType,std::less<std::string>,std::allocator<std::pair<std::string_const,BeghouledPlantType>>>
                 ::begin(this_00);
      while( true ) {
        local_28 = std::
                   map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this_00);
        bVar2 = eastl::operator!=((rbtree_iterator *)&local_38,(rbtree_iterator *)&local_28);
        if (!bVar2) break;
        lVar6 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                          ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_38);
        if (param_2 == *(int *)(lVar6 + 8)) {
          BeghouledTypeToString((BeghouledModule *)&local_30,param_2);
          uVar7 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                            ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_38);
          FUN_05475d88((string *)&local_28,uVar7);
          SeedBankModule::ReplaceSeedPacket(pSVar4,(rbtree_iterator *)&local_30,(string *)&local_28)
          ;
          std::string::~string((string *)&local_28);
          std::string::~string((string *)&local_30);
          goto LAB_03bab514;
        }
        FUN_03ba1df0((rbtree_iterator *)&local_38);
      }
    }
    BeghouledTypeToString((BeghouledModule *)&local_30,iVar1);
    std::string::string((string *)&local_28,"");
    SeedBankModule::ReplaceSeedPacket(pSVar4,(rbtree_iterator *)&local_30,(string *)&local_28);
    std::string::~string((string *)&local_28);
    nop();
    std::string::~string((string *)&local_30);
LAB_03bab514:
    FUN_03ba4588((__normal_iterator *)&local_40);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BeghouledModule::onPlantUpgraded(std::string&) */

void BeghouledModule::onPlantUpgraded(string *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  ulong uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  string *psVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05475d88(asStack_10);
  uVar2 = CalcBeghouledTypeFromPlantType((BeghouledModule *)param_1,asStack_10);
  std::string::~string(asStack_10);
  uVar5 = 1;
  do {
    uVar10 = uVar5;
    uVar11 = *(undefined8 *)(param_1 + 0xa8);
    uVar5 = FUN_03ba1dc0(uVar11,*(undefined8 *)(param_1 + 0xb0));
    if (uVar5 < uVar10) goto LAB_03bab71c;
    piVar4 = (int *)FUN_03ba1de8(uVar11,uVar10);
    iVar3 = *piVar4;
    BeghouledTypeToString((BeghouledModule *)asStack_10,uVar2);
    piVar4 = (int *)std::
                    map<std::string,BeghouledPlantType,std::less<std::string>,std::allocator<std::pair<std::string_const,BeghouledPlantType>>>
                    ::operator[]((map<std::string,BeghouledPlantType,std::less<std::string>,std::allocator<std::pair<std::string_const,BeghouledPlantType>>>
                                  *)(param_1 + 0x60),asStack_10);
    iVar1 = *piVar4;
    std::string::~string(asStack_10);
    uVar5 = uVar10 + 1;
  } while (iVar3 != iVar1);
  puVar6 = (undefined4 *)FUN_03ba1de8(*(undefined8 *)(param_1 + 0xa8),uVar10);
  *puVar6 = uVar2;
  pcVar7 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar7,"Play_UI_MiniGame_Beghouled_Upgrade");
  *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + 1;
  psVar8 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar8);
  plVar9 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  iVar3 = (**(code **)(*plVar9 + 0x78))();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  if (0 < iVar3) {
    Board::TakeSunMoney(*(Board **)(gLawnApp + 0x9f0),iVar3,false,false);
  }
  updateBoardForUpgradedPlant((BeghouledModule *)param_1,uVar2);
  updateSeedBank((BeghouledModule *)param_1,uVar2);
LAB_03bab71c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BeghouledModule::registerForEvents() */

void __thiscall BeghouledModule::registerForEvents(BeghouledModule *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  Board *pBVar3;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  CBMemberTranslatorX aCStack_c8 [24];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  Delegate1wRet<bool,Sexy::Touch_const&> aDStack_68 [48];
  Delegate0wRet<bool> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,checkWinCondition);
  Sexy::Delegate0wRet<bool>::Delegate0wRet<BeghouledModule,bool(BeghouledModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_80);
  LevelModuleManager::RegisterWinCondition(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUpdate);
  Sexy::Delegate0::Delegate0<BeghouledModule,void(BeghouledModule::*)()>
            ((Delegate0 *)aDStack_38,(CBMemberTranslatorX *)&local_80);
  LevelModuleManager::RegisterOnUpdate(pLVar2,aDStack_38);
  pBVar3 = *(Board **)(gLawnApp + 0x9f0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onTouchEvent);
  Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
  Delegate1wRet<BeghouledModule,bool(BeghouledModule::*)(Sexy::Touch_const&)>
            (aDStack_68,(CBMemberTranslatorX *)&local_80);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_98);
  Sexy::Delegate0::Delegate0((Delegate0 *)aDStack_38,(DummyInit *)0x0);
  Board::RegisterTouchGameplayObject
            (pBVar3,aDStack_68,0,
             (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_98,aDStack_38)
  ;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_98);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantDied);
  local_f0 = local_b0;
  uStack_e8 = uStack_a8;
  local_e0 = local_a0;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<BeghouledModule,void(BeghouledModule::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantDied,&local_f0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onClearBoard);
  Sexy::Delegate0::Delegate0<BeghouledModule,void(BeghouledModule::*)()>
            ((Delegate0 *)aDStack_38,(CBMemberTranslatorX *)&local_80);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::ClearBoard,(Delegate0 *)aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantUpgraded);
  local_100 = local_88;
  local_110 = local_98;
  uStack_108 = uStack_90;
  MessageRouter::
  Subscribe<std::string&,Sexy::CBMemberTranslatorX<BeghouledModule,void(BeghouledModule::*)(std::string&)>>
            ((MessageRouter *)puVar1,Message::BeghouledPlantUpgraded,&local_110);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLocationCleared);
  local_130 = local_80;
  uStack_128 = uStack_78;
  local_120 = local_70;
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<BeghouledModule,void(BeghouledModule::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::BeghouledClearGridLocation,&local_130);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,Shuffle);
  Sexy::Delegate0::Delegate0<BeghouledModule,void(BeghouledModule::*)()>
            ((Delegate0 *)aDStack_38,aCStack_c8);
  MessageRouter::Subscribe
            ((MessageRouter *)puVar1,Message::BeghouledShufflePowerup,(Delegate0 *)aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

