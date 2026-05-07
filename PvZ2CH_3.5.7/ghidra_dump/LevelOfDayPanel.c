// Class: LevelOfDayPanel


/* LevelOfDayPanel::~LevelOfDayPanel() */

void __thiscall LevelOfDayPanel::~LevelOfDayPanel(LevelOfDayPanel *this)

{
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined ***)this = &PTR_GetClass_0693c540;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* LevelOfDayPanel::~LevelOfDayPanel() */

void __thiscall LevelOfDayPanel::~LevelOfDayPanel(LevelOfDayPanel *this)

{
  ~LevelOfDayPanel(this);
  AK::FreeHook(this);
  return;
}


/* LevelOfDayPanel::InitView() */

void __thiscall LevelOfDayPanel::InitView(LevelOfDayPanel *this)

{
  ProfileMgr *this_00;
  long lVar1;
  LevelOfDayItem *this_01;
  int iVar2;
  undefined1 auVar3 [16];
  
  iVar2 = 0;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar1 = ProfileMgr::GetCurrentProfile(this_00);
  if (lVar1 != 0) {
    do {
      iVar2 = iVar2 + 1;
      this_01 = ::operator_new(0xf0);
      LevelOfDayItem::LevelOfDayItem(this_01,iVar2);
      if (*(LevelOfDayEntrance **)(this + 0xd8) != (LevelOfDayEntrance *)0x0) {
        auVar3 = LevelOfDayEntrance::GetStartOffsetByIndex
                           (*(LevelOfDayEntrance **)(this + 0xd8),iVar2);
        (**(code **)(*(long *)this_01 + 0x1a8))
                  (this_01,auVar3._0_8_ >> 0x20,auVar3._8_8_ & 0xffffffff);
        (**(code **)(*(long *)this_01 + 0x158))(this_01,0);
        LevelOfDayEntrance::AddDayItem(*(LevelOfDayEntrance **)(this + 0xd8),this_01);
      }
      (**(code **)(*(long *)this + 0x60))(this,this_01);
    } while (iVar2 != 7);
  }
  return;
}


/* LevelOfDayPanel::LevelOfDayPanel(Sexy::TRect<int>&, LevelOfDayEntrance*) */

void __thiscall
LevelOfDayPanel::LevelOfDayPanel(LevelOfDayPanel *this,TRect *param_1,LevelOfDayEntrance *param_2)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined ***)this = &PTR_GetClass_0693c540;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  PlantHeadshot::Resize((PlantHeadshot *)this,param_1);
  *(LevelOfDayEntrance **)(this + 0xd8) = param_2;
  InitView(this);
  return;
}

