// Class: PlantCultivateSelectItem


/* PlantCultivateSelectItem::~PlantCultivateSelectItem() */

void __thiscall PlantCultivateSelectItem::~PlantCultivateSelectItem(PlantCultivateSelectItem *this)

{
  *(undefined ***)this = &PTR_GetClass_0663edd0;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* PlantCultivateSelectItem::~PlantCultivateSelectItem() */

void __thiscall PlantCultivateSelectItem::~PlantCultivateSelectItem(PlantCultivateSelectItem *this)

{
  ~PlantCultivateSelectItem(this);
  AK::FreeHook(this);
  return;
}


/* PlantCultivateSelectItem::PlantCultivateSelectItem() */

void __thiscall PlantCultivateSelectItem::PlantCultivateSelectItem(PlantCultivateSelectItem *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_0663edd0;
  return;
}


/* PlantCultivateSelectItem::Select(bool) */

void __thiscall PlantCultivateSelectItem::Select(PlantCultivateSelectItem *this,bool param_1)

{
  long *plVar1;
  
  this[0xdc] = (PlantCultivateSelectItem)param_1;
  plVar1 = *(long **)(this + 0xe8);
  if (!param_1) {
    (**(code **)(*plVar1 + 0x158))(plVar1);
    return;
  }
  (**(code **)(*plVar1 + 0x158))(plVar1,1);
  return;
}


/* PlantCultivateSelectItem::TouchEnded(Sexy::Touch const&) */

void __thiscall PlantCultivateSelectItem::TouchEnded(PlantCultivateSelectItem *this,Touch *param_1)

{
  if (*(int *)(this + 0xd4) != (int)*(undefined8 *)param_1) {
    return;
  }
  UIPlantCultivateSelect::SelectItem
            (*(UIPlantCultivateSelect **)(this + 0xe0),*(int *)(this + 0xd8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCultivateSelectItem::InitView(UIPlantCultivateSelect*, int) */

void __thiscall
PlantCultivateSelectItem::InitView
          (PlantCultivateSelectItem *this,UIPlantCultivateSelect *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long *plVar6;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  UIWidgetImage *pUVar7;
  code *pcVar8;
  string asStack_18 [8];
  undefined4 local_10 [2];
  long local_8;
  
  *(int *)(this + 0xd8) = param_2;
  local_8 = ___stack_chk_guard;
  *(UIPlantCultivateSelect **)(this + 0xe0) = param_1;
  this[0xdc] = (PlantCultivateSelectItem)0x0;
  plVar6 = (long *)UIRewardFrameSelect::CreateUIRewardFrame(param_2,0,true);
  uVar3 = *(undefined4 *)(this + 0x50);
  uVar4 = *(undefined4 *)(this + 0x54);
  pcVar8 = *(code **)(*plVar6 + 0x198);
  *(undefined1 *)((long)plVar6 + 0x6d) = 0;
  (*pcVar8)(plVar6,0,0,uVar3,uVar4);
  (**(code **)(*(long *)this + 0x60))(this,plVar6);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  iVar2 = PlantNameMapperServerID::GetInstance();
  NameMapperBase::GetNameForId(iVar2);
  cVar1 = PlayerInfo::GetIsPlantUnlocked(this_01,asStack_18);
  if (cVar1 != '\0') {
    std::string::string((string *)local_10,"IMAGE_UI_PLANTCULTIVATE_OBTAINED");
    pUVar7 = ::operator_new(0x118);
    UIWidgetImage::UIWidgetImage(pUVar7,(string *)local_10);
    std::string::~string((string *)local_10);
    nop();
    iVar2 = FUN_03480788(2);
    uVar3 = FUN_03480788(10);
    uVar4 = FUN_03480788(0x28);
    uVar5 = FUN_03480788(0x16);
    (**(code **)(*(long *)pUVar7 + 0x198))(pUVar7,-iVar2,uVar3,uVar4,uVar5);
    local_10[0] = 2;
    UIWidgetImage::SetImageType(pUVar7,(string *)local_10,0.0);
    (**(code **)(*(long *)this + 0x60))(this,pUVar7);
  }
  std::string::string((string *)local_10,"IMAGE_UI_GENERIC_CHECK_MARK");
  pUVar7 = ::operator_new(0x118);
  UIWidgetImage::UIWidgetImage(pUVar7,(string *)local_10);
  *(UIWidgetImage **)(this + 0xe8) = pUVar7;
  std::string::~string((string *)local_10);
  nop();
  (**(code **)(**(long **)(this + 0xe8) + 0x198))
            (*(long **)(this + 0xe8),0,0,*(undefined4 *)(this + 0x50),*(undefined4 *)(this + 0x54));
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xe8));
  (**(code **)(**(long **)(this + 0xe8) + 0x158))(*(long **)(this + 0xe8),0);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

