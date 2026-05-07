// Class: HolidayEventBannerData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HolidayEventBannerData::HolidayEventBannerData() */

void __thiscall HolidayEventBannerData::HolidayEventBannerData(HolidayEventBannerData *this)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  std::string::string((string *)this,"Default");
  nop();
  std::string::string((string *)(this + 8),"IMAGE_UI_HUD_WORLDMAP_LOD_MINI_STRETCH");
  nop();
  std::string::string((string *)(this + 0x10),"");
  nop();
  *(undefined4 *)(this + 0x18) = 0;
  std::string::string((string *)(this + 0x20),"IMAGE_UI_HUD_WORLDMAP_LOD_PINATA");
  nop();
  std::string::string((string *)(this + 0x28),"IMAGE_UI_HUD_WORLDMAP_LOD_ZOMBIES2");
  nop();
  std::string::string((string *)(this + 0x30),"[WORLDMAP_EVENT_LOD_TITLE]");
  nop();
  std::string::string((string *)(this + 0x38),"[WORLDMAP_EVENT_LOD_DESC]");
  nop();
  std::string::string((string *)(this + 0x40),"IMAGE_UI_HUD_WORLDMAP_LOD_MINI_STRETCH");
  nop();
  std::string::string((string *)(this + 0x48),"");
  nop();
  *(undefined4 *)(this + 0x50) = 0;
  std::string::string((string *)(this + 0x58),"IMAGE_UI_HUD_WORLDMAP_LOD_PINATA");
  nop();
  std::string::string((string *)(this + 0x60),"IMAGE_UI_HUD_WORLDMAP_LOD_MINI_CAP");
  nop();
  std::string::string((string *)(this + 0x68),"[WORLDMAP_EVENT_LOD_UPCOMING_DESC]");
  nop();
  std::string::string((string *)(this + 0x70),"[WORLDMAP_EVENT_LOD_UPCOMING_TITLE]");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HolidayEventBannerData::~HolidayEventBannerData() */

void __thiscall HolidayEventBannerData::~HolidayEventBannerData(HolidayEventBannerData *this)

{
  std::string::~string((string *)(this + 0x70));
  std::string::~string((string *)(this + 0x68));
  std::string::~string((string *)(this + 0x60));
  std::string::~string((string *)(this + 0x58));
  std::string::~string((string *)(this + 0x48));
  std::string::~string((string *)(this + 0x40));
  std::string::~string((string *)(this + 0x38));
  std::string::~string((string *)(this + 0x30));
  std::string::~string((string *)(this + 0x28));
  std::string::~string((string *)(this + 0x20));
  std::string::~string((string *)(this + 0x10));
  std::string::~string((string *)(this + 8));
  std::string::~string((string *)this);
  return;
}


/* HolidayEventBannerData::HolidayEventBannerData(HolidayEventBannerData&&) */

void __thiscall
HolidayEventBannerData::HolidayEventBannerData
          (HolidayEventBannerData *this,HolidayEventBannerData *param_1)

{
  FUN_05474148();
  FUN_05474148(this + 8,param_1 + 8);
  FUN_05474148(this + 0x10,param_1 + 0x10);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  FUN_05474148(this + 0x20,param_1 + 0x20);
  FUN_05474148(this + 0x28,param_1 + 0x28);
  FUN_05474148(this + 0x30,param_1 + 0x30);
  FUN_05474148(this + 0x38,param_1 + 0x38);
  FUN_05474148(this + 0x40,param_1 + 0x40);
  FUN_05474148(this + 0x48,param_1 + 0x48);
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  FUN_05474148(this + 0x58,param_1 + 0x58);
  FUN_05474148(this + 0x60,param_1 + 0x60);
  FUN_05474148(this + 0x68,param_1 + 0x68);
  FUN_05474148(this + 0x70,param_1 + 0x70);
  return;
}


/* HolidayEventBannerData::HolidayEventBannerData(HolidayEventBannerData const&) */

void __thiscall
HolidayEventBannerData::HolidayEventBannerData
          (HolidayEventBannerData *this,HolidayEventBannerData *param_1)

{
  FUN_05475d88();
  FUN_05475d88(this + 8,param_1 + 8);
  FUN_05475d88(this + 0x10,param_1 + 0x10);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  FUN_05475d88(this + 0x20,param_1 + 0x20);
  FUN_05475d88(this + 0x28,param_1 + 0x28);
  FUN_05475d88(this + 0x30,param_1 + 0x30);
  FUN_05475d88(this + 0x38,param_1 + 0x38);
  FUN_05475d88(this + 0x40,param_1 + 0x40);
  FUN_05475d88(this + 0x48,param_1 + 0x48);
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  FUN_05475d88(this + 0x58,param_1 + 0x58);
  FUN_05475d88(this + 0x60,param_1 + 0x60);
  FUN_05475d88(this + 0x68,param_1 + 0x68);
  FUN_05475d88(this + 0x70,param_1 + 0x70);
  return;
}

