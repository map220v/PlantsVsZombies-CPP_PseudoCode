// Class: BirthdayScrollPanel


/* BirthdayScrollPanel::~BirthdayScrollPanel() */

void __thiscall BirthdayScrollPanel::~BirthdayScrollPanel(BirthdayScrollPanel *this)

{
  *(undefined ***)this = &PTR_GetClass_069282d0;
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* BirthdayScrollPanel::~BirthdayScrollPanel() */

void __thiscall BirthdayScrollPanel::~BirthdayScrollPanel(BirthdayScrollPanel *this)

{
  ~BirthdayScrollPanel(this);
  AK::FreeHook(this);
  return;
}


/* BirthdayScrollPanel::InitView() */

void __thiscall BirthdayScrollPanel::InitView(BirthdayScrollPanel *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  LevelOfTheDayMgr *this_00;
  BirthItem *this_01;
  code *pcVar8;
  
  this_00 = (LevelOfTheDayMgr *)LevelOfTheDayMgr::GetInstance();
  iVar2 = LevelOfTheDayMgr::GetRealInterval(this_00);
  iVar6 = 0;
  do {
    iVar1 = iVar6 + 1;
    iVar7 = 0;
    if (iVar1 == iVar2) {
      this_01 = ::operator_new(0xf0);
      BirthItem::BirthItem(this_01,iVar2);
      iVar7 = FUN_049ce980(0xfffffff1);
    }
    else {
      this_01 = ::operator_new(0xf0);
      BirthItem::BirthItem(this_01,iVar1);
    }
    iVar3 = FUN_049ce980(5);
    iVar4 = FUN_049ce980(0x8a);
    iVar5 = FUN_049ce980(0x32);
    (**(code **)(*(long *)this_01 + 0x1a8))(this_01,iVar3 + iVar4 * iVar6 + iVar7,iVar5 + iVar7);
    iVar6 = FUN_049ce980(0x30);
    pcVar8 = *(code **)(*(long *)this + 0x60);
    *(int *)(this + 0x50) = *(int *)(this + 0x50) + iVar6;
    (*pcVar8)(this,this_01);
    iVar6 = iVar1;
  } while (iVar1 != 7);
  return;
}


/* BirthdayScrollPanel::BirthdayScrollPanel(Sexy::TRect<int>&) */

void __thiscall BirthdayScrollPanel::BirthdayScrollPanel(BirthdayScrollPanel *this,TRect *param_1)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_069282d0;
  PlantHeadshot::Resize((PlantHeadshot *)this,param_1);
  InitView(this);
  return;
}

