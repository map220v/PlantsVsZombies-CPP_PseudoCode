// Class: ICloudRequestCallbackFunction<BuyItemUI,bool>


/* ICloudRequestCallbackFunction<BuyItemUI, bool>::process(bool) */

void __thiscall
ICloudRequestCallbackFunction<BuyItemUI,bool>::process
          (ICloudRequestCallbackFunction<BuyItemUI,bool> *this,bool param_1)

{
  long lVar1;
  undefined1 local_1;
  
  lVar1 = (long)*(ulong *)(this + 0x20) >> 1;
  local_1 = param_1;
  if ((*(ulong *)(this + 0x20) & 1) != 0) {
    (**(code **)(*(long *)(*(long *)(this + 0x10) + lVar1) + *(long *)(this + 0x18)))
              (*(long *)(this + 0x10) + lVar1,&local_1);
    return;
  }
  (**(code **)(this + 0x18))(*(long *)(this + 0x10) + lVar1,&local_1);
  return;
}


/* ICloudRequestCallbackFunction<ZMatchTicketShop, bool>::~ICloudRequestCallbackFunction() */

void __thiscall
ICloudRequestCallbackFunction<ZMatchTicketShop,bool>::~ICloudRequestCallbackFunction
          (ICloudRequestCallbackFunction<ZMatchTicketShop,bool> *this)

{
  *(undefined ***)this = &PTR__ICloudRequestCallbackFunction_066c3b80;
  ICloudRequestCallbackFunctionBase::~ICloudRequestCallbackFunctionBase
            ((ICloudRequestCallbackFunctionBase *)this);
  return;
}


/* ICloudRequestCallbackFunction<ZMatchTicketShop, bool>::~ICloudRequestCallbackFunction() */

void __thiscall
ICloudRequestCallbackFunction<ZMatchTicketShop,bool>::~ICloudRequestCallbackFunction
          (ICloudRequestCallbackFunction<ZMatchTicketShop,bool> *this)

{
  ~ICloudRequestCallbackFunction(this);
  AK::FreeHook(this);
  return;
}


/* ICloudRequestCallbackFunction<ZMatchShopMgr, bool>::~ICloudRequestCallbackFunction() */

void __thiscall
ICloudRequestCallbackFunction<ZMatchShopMgr,bool>::~ICloudRequestCallbackFunction
          (ICloudRequestCallbackFunction<ZMatchShopMgr,bool> *this)

{
  *(undefined ***)this = &PTR__ICloudRequestCallbackFunction_066c3bd0;
  ICloudRequestCallbackFunctionBase::~ICloudRequestCallbackFunctionBase
            ((ICloudRequestCallbackFunctionBase *)this);
  return;
}


/* ICloudRequestCallbackFunction<ZMatchShopMgr, bool>::~ICloudRequestCallbackFunction() */

void __thiscall
ICloudRequestCallbackFunction<ZMatchShopMgr,bool>::~ICloudRequestCallbackFunction
          (ICloudRequestCallbackFunction<ZMatchShopMgr,bool> *this)

{
  ~ICloudRequestCallbackFunction(this);
  AK::FreeHook(this);
  return;
}


/* ICloudRequestCallbackFunction<ZMatchTicketShop,
   bool>::ICloudRequestCallbackFunction(ZMatchTicketShop*, void (ZMatchTicketShop::*)(bool const&))
    */

void ICloudRequestCallbackFunction<ZMatchTicketShop,bool>::ICloudRequestCallbackFunction
               (ZMatchTicketShop *param_1,_func_void_bool_ptr *param_2)

{
  undefined8 in_x2;
  undefined8 in_x3;
  
  ICloudRequestCallbackFunctionBase::ICloudRequestCallbackFunctionBase
            ((ICloudRequestCallbackFunctionBase *)param_1);
  *(undefined ***)param_1 = &PTR__ICloudRequestCallbackFunction_066c3b80;
  *(undefined8 *)(param_1 + 0x18) = in_x2;
  *(undefined8 *)(param_1 + 0x20) = in_x3;
  *(_func_void_bool_ptr **)(param_1 + 0x10) = param_2;
  return;
}


/* ICloudRequestCallbackFunction<ZMatchShopMgr, bool>::ICloudRequestCallbackFunction(ZMatchShopMgr*,
   void (ZMatchShopMgr::*)(bool const&)) */

void ICloudRequestCallbackFunction<ZMatchShopMgr,bool>::ICloudRequestCallbackFunction
               (ZMatchShopMgr *param_1,_func_void_bool_ptr *param_2)

{
  undefined8 in_x2;
  undefined8 in_x3;
  
  ICloudRequestCallbackFunctionBase::ICloudRequestCallbackFunctionBase
            ((ICloudRequestCallbackFunctionBase *)param_1);
  *(undefined ***)param_1 = &PTR__ICloudRequestCallbackFunction_066c3bd0;
  *(undefined8 *)(param_1 + 0x18) = in_x2;
  *(undefined8 *)(param_1 + 0x20) = in_x3;
  *(_func_void_bool_ptr **)(param_1 + 0x10) = param_2;
  return;
}


/* ICloudRequestCallbackFunction<UIMiniGameEntrance, bool>::~ICloudRequestCallbackFunction() */

void __thiscall
ICloudRequestCallbackFunction<UIMiniGameEntrance,bool>::~ICloudRequestCallbackFunction
          (ICloudRequestCallbackFunction<UIMiniGameEntrance,bool> *this)

{
  *(undefined ***)this = &PTR__ICloudRequestCallbackFunction_066c74b0;
  ICloudRequestCallbackFunctionBase::~ICloudRequestCallbackFunctionBase
            ((ICloudRequestCallbackFunctionBase *)this);
  return;
}


/* ICloudRequestCallbackFunction<UIMiniGameEntrance, bool>::~ICloudRequestCallbackFunction() */

void __thiscall
ICloudRequestCallbackFunction<UIMiniGameEntrance,bool>::~ICloudRequestCallbackFunction
          (ICloudRequestCallbackFunction<UIMiniGameEntrance,bool> *this)

{
  ~ICloudRequestCallbackFunction(this);
  AK::FreeHook(this);
  return;
}


/* ICloudRequestCallbackFunction<UIMiniGameEntrance,
   bool>::ICloudRequestCallbackFunction(UIMiniGameEntrance*, void (UIMiniGameEntrance::*)(bool
   const&)) */

void ICloudRequestCallbackFunction<UIMiniGameEntrance,bool>::ICloudRequestCallbackFunction
               (UIMiniGameEntrance *param_1,_func_void_bool_ptr *param_2)

{
  undefined8 in_x2;
  undefined8 in_x3;
  
  ICloudRequestCallbackFunctionBase::ICloudRequestCallbackFunctionBase
            ((ICloudRequestCallbackFunctionBase *)param_1);
  *(undefined ***)param_1 = &PTR__ICloudRequestCallbackFunction_066c74b0;
  *(undefined8 *)(param_1 + 0x18) = in_x2;
  *(undefined8 *)(param_1 + 0x20) = in_x3;
  *(_func_void_bool_ptr **)(param_1 + 0x10) = param_2;
  return;
}


/* ICloudRequestCallbackFunction<UISpringBuyPlant, bool>::~ICloudRequestCallbackFunction() */

void __thiscall
ICloudRequestCallbackFunction<UISpringBuyPlant,bool>::~ICloudRequestCallbackFunction
          (ICloudRequestCallbackFunction<UISpringBuyPlant,bool> *this)

{
  *(undefined ***)this = &PTR__ICloudRequestCallbackFunction_066cfd20;
  ICloudRequestCallbackFunctionBase::~ICloudRequestCallbackFunctionBase
            ((ICloudRequestCallbackFunctionBase *)this);
  return;
}


/* ICloudRequestCallbackFunction<UISpringBuyPlant, bool>::~ICloudRequestCallbackFunction() */

void __thiscall
ICloudRequestCallbackFunction<UISpringBuyPlant,bool>::~ICloudRequestCallbackFunction
          (ICloudRequestCallbackFunction<UISpringBuyPlant,bool> *this)

{
  ~ICloudRequestCallbackFunction(this);
  AK::FreeHook(this);
  return;
}


/* ICloudRequestCallbackFunction<UISpringBuyPlant,
   bool>::ICloudRequestCallbackFunction(UISpringBuyPlant*, void (UISpringBuyPlant::*)(bool const&))
    */

void ICloudRequestCallbackFunction<UISpringBuyPlant,bool>::ICloudRequestCallbackFunction
               (UISpringBuyPlant *param_1,_func_void_bool_ptr *param_2)

{
  undefined8 in_x2;
  undefined8 in_x3;
  
  ICloudRequestCallbackFunctionBase::ICloudRequestCallbackFunctionBase
            ((ICloudRequestCallbackFunctionBase *)param_1);
  *(undefined ***)param_1 = &PTR__ICloudRequestCallbackFunction_066cfd20;
  *(undefined8 *)(param_1 + 0x18) = in_x2;
  *(undefined8 *)(param_1 + 0x20) = in_x3;
  *(_func_void_bool_ptr **)(param_1 + 0x10) = param_2;
  return;
}


/* ICloudRequestCallbackFunction<TimeTravelEntranceUI, bool>::~ICloudRequestCallbackFunction() */

void __thiscall
ICloudRequestCallbackFunction<TimeTravelEntranceUI,bool>::~ICloudRequestCallbackFunction
          (ICloudRequestCallbackFunction<TimeTravelEntranceUI,bool> *this)

{
  *(undefined ***)this = &PTR__ICloudRequestCallbackFunction_067245d0;
  ICloudRequestCallbackFunctionBase::~ICloudRequestCallbackFunctionBase
            ((ICloudRequestCallbackFunctionBase *)this);
  return;
}


/* ICloudRequestCallbackFunction<TimeTravelEntranceUI, bool>::~ICloudRequestCallbackFunction() */

void __thiscall
ICloudRequestCallbackFunction<TimeTravelEntranceUI,bool>::~ICloudRequestCallbackFunction
          (ICloudRequestCallbackFunction<TimeTravelEntranceUI,bool> *this)

{
  ~ICloudRequestCallbackFunction(this);
  AK::FreeHook(this);
  return;
}


/* ICloudRequestCallbackFunction<TimeTravelEntranceUI,
   bool>::ICloudRequestCallbackFunction(TimeTravelEntranceUI*, void (TimeTravelEntranceUI::*)(bool
   const&)) */

void ICloudRequestCallbackFunction<TimeTravelEntranceUI,bool>::ICloudRequestCallbackFunction
               (TimeTravelEntranceUI *param_1,_func_void_bool_ptr *param_2)

{
  undefined8 in_x2;
  undefined8 in_x3;
  
  ICloudRequestCallbackFunctionBase::ICloudRequestCallbackFunctionBase
            ((ICloudRequestCallbackFunctionBase *)param_1);
  *(undefined ***)param_1 = &PTR__ICloudRequestCallbackFunction_067245d0;
  *(undefined8 *)(param_1 + 0x18) = in_x2;
  *(undefined8 *)(param_1 + 0x20) = in_x3;
  *(_func_void_bool_ptr **)(param_1 + 0x10) = param_2;
  return;
}


/* ICloudRequestCallbackFunction<PlantDefenceEntrance, bool>::~ICloudRequestCallbackFunction() */

void __thiscall
ICloudRequestCallbackFunction<PlantDefenceEntrance,bool>::~ICloudRequestCallbackFunction
          (ICloudRequestCallbackFunction<PlantDefenceEntrance,bool> *this)

{
  *(undefined ***)this = &PTR__ICloudRequestCallbackFunction_06725750;
  ICloudRequestCallbackFunctionBase::~ICloudRequestCallbackFunctionBase
            ((ICloudRequestCallbackFunctionBase *)this);
  return;
}


/* ICloudRequestCallbackFunction<PlantDefenceEntrance, bool>::~ICloudRequestCallbackFunction() */

void __thiscall
ICloudRequestCallbackFunction<PlantDefenceEntrance,bool>::~ICloudRequestCallbackFunction
          (ICloudRequestCallbackFunction<PlantDefenceEntrance,bool> *this)

{
  ~ICloudRequestCallbackFunction(this);
  AK::FreeHook(this);
  return;
}


/* ICloudRequestCallbackFunction<PlantDefenceEntrance,
   bool>::ICloudRequestCallbackFunction(PlantDefenceEntrance*, void (PlantDefenceEntrance::*)(bool
   const&)) */

void ICloudRequestCallbackFunction<PlantDefenceEntrance,bool>::ICloudRequestCallbackFunction
               (PlantDefenceEntrance *param_1,_func_void_bool_ptr *param_2)

{
  undefined8 in_x2;
  undefined8 in_x3;
  
  ICloudRequestCallbackFunctionBase::ICloudRequestCallbackFunctionBase
            ((ICloudRequestCallbackFunctionBase *)param_1);
  *(undefined ***)param_1 = &PTR__ICloudRequestCallbackFunction_06725750;
  *(undefined8 *)(param_1 + 0x18) = in_x2;
  *(undefined8 *)(param_1 + 0x20) = in_x3;
  *(_func_void_bool_ptr **)(param_1 + 0x10) = param_2;
  return;
}


/* ICloudRequestCallbackFunction<AlmanacPage, bool>::~ICloudRequestCallbackFunction() */

void __thiscall
ICloudRequestCallbackFunction<AlmanacPage,bool>::~ICloudRequestCallbackFunction
          (ICloudRequestCallbackFunction<AlmanacPage,bool> *this)

{
  *(undefined ***)this = &PTR__ICloudRequestCallbackFunction_067312c0;
  ICloudRequestCallbackFunctionBase::~ICloudRequestCallbackFunctionBase
            ((ICloudRequestCallbackFunctionBase *)this);
  return;
}


/* ICloudRequestCallbackFunction<AlmanacPage, bool>::~ICloudRequestCallbackFunction() */

void __thiscall
ICloudRequestCallbackFunction<AlmanacPage,bool>::~ICloudRequestCallbackFunction
          (ICloudRequestCallbackFunction<AlmanacPage,bool> *this)

{
  ~ICloudRequestCallbackFunction(this);
  AK::FreeHook(this);
  return;
}


/* ICloudRequestCallbackFunction<AlmanacPage, bool>::ICloudRequestCallbackFunction(AlmanacPage*,
   void (AlmanacPage::*)(bool const&)) */

void ICloudRequestCallbackFunction<AlmanacPage,bool>::ICloudRequestCallbackFunction
               (AlmanacPage *param_1,_func_void_bool_ptr *param_2)

{
  undefined8 in_x2;
  undefined8 in_x3;
  
  ICloudRequestCallbackFunctionBase::ICloudRequestCallbackFunctionBase
            ((ICloudRequestCallbackFunctionBase *)param_1);
  *(undefined ***)param_1 = &PTR__ICloudRequestCallbackFunction_067312c0;
  *(undefined8 *)(param_1 + 0x18) = in_x2;
  *(undefined8 *)(param_1 + 0x20) = in_x3;
  *(_func_void_bool_ptr **)(param_1 + 0x10) = param_2;
  return;
}


/* ICloudRequestCallbackFunction<WhackAMoleModule, bool>::~ICloudRequestCallbackFunction() */

void __thiscall
ICloudRequestCallbackFunction<WhackAMoleModule,bool>::~ICloudRequestCallbackFunction
          (ICloudRequestCallbackFunction<WhackAMoleModule,bool> *this)

{
  *(undefined ***)this = &PTR__ICloudRequestCallbackFunction_067337d0;
  ICloudRequestCallbackFunctionBase::~ICloudRequestCallbackFunctionBase
            ((ICloudRequestCallbackFunctionBase *)this);
  return;
}


/* ICloudRequestCallbackFunction<WhackAMoleModule, bool>::~ICloudRequestCallbackFunction() */

void __thiscall
ICloudRequestCallbackFunction<WhackAMoleModule,bool>::~ICloudRequestCallbackFunction
          (ICloudRequestCallbackFunction<WhackAMoleModule,bool> *this)

{
  ~ICloudRequestCallbackFunction(this);
  AK::FreeHook(this);
  return;
}


/* ICloudRequestCallbackFunction<WhackAMoleModule,
   bool>::ICloudRequestCallbackFunction(WhackAMoleModule*, void (WhackAMoleModule::*)(bool const&))
    */

void ICloudRequestCallbackFunction<WhackAMoleModule,bool>::ICloudRequestCallbackFunction
               (WhackAMoleModule *param_1,_func_void_bool_ptr *param_2)

{
  undefined8 in_x2;
  undefined8 in_x3;
  
  ICloudRequestCallbackFunctionBase::ICloudRequestCallbackFunctionBase
            ((ICloudRequestCallbackFunctionBase *)param_1);
  *(undefined ***)param_1 = &PTR__ICloudRequestCallbackFunction_067337d0;
  *(undefined8 *)(param_1 + 0x18) = in_x2;
  *(undefined8 *)(param_1 + 0x20) = in_x3;
  *(_func_void_bool_ptr **)(param_1 + 0x10) = param_2;
  return;
}


/* ICloudRequestCallbackFunction<PlantfoodUI, bool>::~ICloudRequestCallbackFunction() */

void __thiscall
ICloudRequestCallbackFunction<PlantfoodUI,bool>::~ICloudRequestCallbackFunction
          (ICloudRequestCallbackFunction<PlantfoodUI,bool> *this)

{
  *(undefined ***)this = &PTR__ICloudRequestCallbackFunction_067a2a40;
  ICloudRequestCallbackFunctionBase::~ICloudRequestCallbackFunctionBase
            ((ICloudRequestCallbackFunctionBase *)this);
  return;
}


/* ICloudRequestCallbackFunction<PlantfoodUI, bool>::~ICloudRequestCallbackFunction() */

void __thiscall
ICloudRequestCallbackFunction<PlantfoodUI,bool>::~ICloudRequestCallbackFunction
          (ICloudRequestCallbackFunction<PlantfoodUI,bool> *this)

{
  ~ICloudRequestCallbackFunction(this);
  AK::FreeHook(this);
  return;
}


/* ICloudRequestCallbackFunction<PlantfoodUI, bool>::ICloudRequestCallbackFunction(PlantfoodUI*,
   void (PlantfoodUI::*)(bool const&)) */

void ICloudRequestCallbackFunction<PlantfoodUI,bool>::ICloudRequestCallbackFunction
               (PlantfoodUI *param_1,_func_void_bool_ptr *param_2)

{
  undefined8 in_x2;
  undefined8 in_x3;
  
  ICloudRequestCallbackFunctionBase::ICloudRequestCallbackFunctionBase
            ((ICloudRequestCallbackFunctionBase *)param_1);
  *(undefined ***)param_1 = &PTR__ICloudRequestCallbackFunction_067a2a40;
  *(undefined8 *)(param_1 + 0x18) = in_x2;
  *(undefined8 *)(param_1 + 0x20) = in_x3;
  *(_func_void_bool_ptr **)(param_1 + 0x10) = param_2;
  return;
}


/* ICloudRequestCallbackFunction<LanternRiddlesUI, bool>::~ICloudRequestCallbackFunction() */

void __thiscall
ICloudRequestCallbackFunction<LanternRiddlesUI,bool>::~ICloudRequestCallbackFunction
          (ICloudRequestCallbackFunction<LanternRiddlesUI,bool> *this)

{
  *(undefined ***)this = &PTR__ICloudRequestCallbackFunction_067ff620;
  ICloudRequestCallbackFunctionBase::~ICloudRequestCallbackFunctionBase
            ((ICloudRequestCallbackFunctionBase *)this);
  return;
}


/* ICloudRequestCallbackFunction<LanternRiddlesUI, bool>::~ICloudRequestCallbackFunction() */

void __thiscall
ICloudRequestCallbackFunction<LanternRiddlesUI,bool>::~ICloudRequestCallbackFunction
          (ICloudRequestCallbackFunction<LanternRiddlesUI,bool> *this)

{
  ~ICloudRequestCallbackFunction(this);
  AK::FreeHook(this);
  return;
}


/* ICloudRequestCallbackFunction<LanternRiddlesUI,
   bool>::ICloudRequestCallbackFunction(LanternRiddlesUI*, void (LanternRiddlesUI::*)(bool const&))
    */

void ICloudRequestCallbackFunction<LanternRiddlesUI,bool>::ICloudRequestCallbackFunction
               (LanternRiddlesUI *param_1,_func_void_bool_ptr *param_2)

{
  undefined8 in_x2;
  undefined8 in_x3;
  
  ICloudRequestCallbackFunctionBase::ICloudRequestCallbackFunctionBase
            ((ICloudRequestCallbackFunctionBase *)param_1);
  *(undefined ***)param_1 = &PTR__ICloudRequestCallbackFunction_067ff620;
  *(undefined8 *)(param_1 + 0x18) = in_x2;
  *(undefined8 *)(param_1 + 0x20) = in_x3;
  *(_func_void_bool_ptr **)(param_1 + 0x10) = param_2;
  return;
}


/* ICloudRequestCallbackFunction<PowerupManager, bool>::~ICloudRequestCallbackFunction() */

void __thiscall
ICloudRequestCallbackFunction<PowerupManager,bool>::~ICloudRequestCallbackFunction
          (ICloudRequestCallbackFunction<PowerupManager,bool> *this)

{
  *(undefined ***)this = &PTR__ICloudRequestCallbackFunction_06832160;
  ICloudRequestCallbackFunctionBase::~ICloudRequestCallbackFunctionBase
            ((ICloudRequestCallbackFunctionBase *)this);
  return;
}


/* ICloudRequestCallbackFunction<PowerupManager, bool>::~ICloudRequestCallbackFunction() */

void __thiscall
ICloudRequestCallbackFunction<PowerupManager,bool>::~ICloudRequestCallbackFunction
          (ICloudRequestCallbackFunction<PowerupManager,bool> *this)

{
  ~ICloudRequestCallbackFunction(this);
  AK::FreeHook(this);
  return;
}


/* ICloudRequestCallbackFunction<PowerupManager,
   bool>::ICloudRequestCallbackFunction(PowerupManager*, void (PowerupManager::*)(bool const&)) */

void ICloudRequestCallbackFunction<PowerupManager,bool>::ICloudRequestCallbackFunction
               (PowerupManager *param_1,_func_void_bool_ptr *param_2)

{
  undefined8 in_x2;
  undefined8 in_x3;
  
  ICloudRequestCallbackFunctionBase::ICloudRequestCallbackFunctionBase
            ((ICloudRequestCallbackFunctionBase *)param_1);
  *(undefined ***)param_1 = &PTR__ICloudRequestCallbackFunction_06832160;
  *(undefined8 *)(param_1 + 0x18) = in_x2;
  *(undefined8 *)(param_1 + 0x20) = in_x3;
  *(_func_void_bool_ptr **)(param_1 + 0x10) = param_2;
  return;
}


/* ICloudRequestCallbackFunction<PVZ2UIBuyPlantDialog, bool>::~ICloudRequestCallbackFunction() */

void __thiscall
ICloudRequestCallbackFunction<PVZ2UIBuyPlantDialog,bool>::~ICloudRequestCallbackFunction
          (ICloudRequestCallbackFunction<PVZ2UIBuyPlantDialog,bool> *this)

{
  *(undefined ***)this = &PTR__ICloudRequestCallbackFunction_0683c840;
  ICloudRequestCallbackFunctionBase::~ICloudRequestCallbackFunctionBase
            ((ICloudRequestCallbackFunctionBase *)this);
  return;
}


/* ICloudRequestCallbackFunction<PVZ2UIBuyPlantDialog, bool>::~ICloudRequestCallbackFunction() */

void __thiscall
ICloudRequestCallbackFunction<PVZ2UIBuyPlantDialog,bool>::~ICloudRequestCallbackFunction
          (ICloudRequestCallbackFunction<PVZ2UIBuyPlantDialog,bool> *this)

{
  ~ICloudRequestCallbackFunction(this);
  AK::FreeHook(this);
  return;
}


/* ICloudRequestCallbackFunction<PVZ2UIBuyPlantDialog,
   bool>::ICloudRequestCallbackFunction(PVZ2UIBuyPlantDialog*, void (PVZ2UIBuyPlantDialog::*)(bool
   const&)) */

void ICloudRequestCallbackFunction<PVZ2UIBuyPlantDialog,bool>::ICloudRequestCallbackFunction
               (PVZ2UIBuyPlantDialog *param_1,_func_void_bool_ptr *param_2)

{
  undefined8 in_x2;
  undefined8 in_x3;
  
  ICloudRequestCallbackFunctionBase::ICloudRequestCallbackFunctionBase
            ((ICloudRequestCallbackFunctionBase *)param_1);
  *(undefined ***)param_1 = &PTR__ICloudRequestCallbackFunction_0683c840;
  *(undefined8 *)(param_1 + 0x18) = in_x2;
  *(undefined8 *)(param_1 + 0x20) = in_x3;
  *(_func_void_bool_ptr **)(param_1 + 0x10) = param_2;
  return;
}


/* ICloudRequestCallbackFunction<ReviveUI, bool>::~ICloudRequestCallbackFunction() */

void __thiscall
ICloudRequestCallbackFunction<ReviveUI,bool>::~ICloudRequestCallbackFunction
          (ICloudRequestCallbackFunction<ReviveUI,bool> *this)

{
  *(undefined ***)this = &PTR__ICloudRequestCallbackFunction_06842910;
  ICloudRequestCallbackFunctionBase::~ICloudRequestCallbackFunctionBase
            ((ICloudRequestCallbackFunctionBase *)this);
  return;
}


/* ICloudRequestCallbackFunction<ReviveUI, bool>::~ICloudRequestCallbackFunction() */

void __thiscall
ICloudRequestCallbackFunction<ReviveUI,bool>::~ICloudRequestCallbackFunction
          (ICloudRequestCallbackFunction<ReviveUI,bool> *this)

{
  ~ICloudRequestCallbackFunction(this);
  AK::FreeHook(this);
  return;
}


/* ICloudRequestCallbackFunction<ReviveUI, bool>::ICloudRequestCallbackFunction(ReviveUI*, void
   (ReviveUI::*)(bool const&)) */

void ICloudRequestCallbackFunction<ReviveUI,bool>::ICloudRequestCallbackFunction
               (ReviveUI *param_1,_func_void_bool_ptr *param_2)

{
  undefined8 in_x2;
  undefined8 in_x3;
  
  ICloudRequestCallbackFunctionBase::ICloudRequestCallbackFunctionBase
            ((ICloudRequestCallbackFunctionBase *)param_1);
  *(undefined ***)param_1 = &PTR__ICloudRequestCallbackFunction_06842910;
  *(undefined8 *)(param_1 + 0x18) = in_x2;
  *(undefined8 *)(param_1 + 0x20) = in_x3;
  *(_func_void_bool_ptr **)(param_1 + 0x10) = param_2;
  return;
}


/* ICloudRequestCallbackFunction<FestivalEntranceUI, bool>::~ICloudRequestCallbackFunction() */

void __thiscall
ICloudRequestCallbackFunction<FestivalEntranceUI,bool>::~ICloudRequestCallbackFunction
          (ICloudRequestCallbackFunction<FestivalEntranceUI,bool> *this)

{
  *(undefined ***)this = &PTR__ICloudRequestCallbackFunction_06843d60;
  ICloudRequestCallbackFunctionBase::~ICloudRequestCallbackFunctionBase
            ((ICloudRequestCallbackFunctionBase *)this);
  return;
}


/* ICloudRequestCallbackFunction<FestivalEntranceUI, bool>::~ICloudRequestCallbackFunction() */

void __thiscall
ICloudRequestCallbackFunction<FestivalEntranceUI,bool>::~ICloudRequestCallbackFunction
          (ICloudRequestCallbackFunction<FestivalEntranceUI,bool> *this)

{
  ~ICloudRequestCallbackFunction(this);
  AK::FreeHook(this);
  return;
}


/* ICloudRequestCallbackFunction<FestivalEntranceUI,
   bool>::ICloudRequestCallbackFunction(FestivalEntranceUI*, void (FestivalEntranceUI::*)(bool
   const&)) */

void ICloudRequestCallbackFunction<FestivalEntranceUI,bool>::ICloudRequestCallbackFunction
               (FestivalEntranceUI *param_1,_func_void_bool_ptr *param_2)

{
  undefined8 in_x2;
  undefined8 in_x3;
  
  ICloudRequestCallbackFunctionBase::ICloudRequestCallbackFunctionBase
            ((ICloudRequestCallbackFunctionBase *)param_1);
  *(undefined ***)param_1 = &PTR__ICloudRequestCallbackFunction_06843d60;
  *(undefined8 *)(param_1 + 0x18) = in_x2;
  *(undefined8 *)(param_1 + 0x20) = in_x3;
  *(_func_void_bool_ptr **)(param_1 + 0x10) = param_2;
  return;
}


/* ICloudRequestCallbackFunction<SummerEventEntranceUI, bool>::~ICloudRequestCallbackFunction() */

void __thiscall
ICloudRequestCallbackFunction<SummerEventEntranceUI,bool>::~ICloudRequestCallbackFunction
          (ICloudRequestCallbackFunction<SummerEventEntranceUI,bool> *this)

{
  *(undefined ***)this = &PTR__ICloudRequestCallbackFunction_06844ac0;
  ICloudRequestCallbackFunctionBase::~ICloudRequestCallbackFunctionBase
            ((ICloudRequestCallbackFunctionBase *)this);
  return;
}


/* ICloudRequestCallbackFunction<SummerEventEntranceUI, bool>::~ICloudRequestCallbackFunction() */

void __thiscall
ICloudRequestCallbackFunction<SummerEventEntranceUI,bool>::~ICloudRequestCallbackFunction
          (ICloudRequestCallbackFunction<SummerEventEntranceUI,bool> *this)

{
  ~ICloudRequestCallbackFunction(this);
  AK::FreeHook(this);
  return;
}


/* ICloudRequestCallbackFunction<SummerEventEntranceUI,
   bool>::ICloudRequestCallbackFunction(SummerEventEntranceUI*, void (SummerEventEntranceUI::*)(bool
   const&)) */

void ICloudRequestCallbackFunction<SummerEventEntranceUI,bool>::ICloudRequestCallbackFunction
               (SummerEventEntranceUI *param_1,_func_void_bool_ptr *param_2)

{
  undefined8 in_x2;
  undefined8 in_x3;
  
  ICloudRequestCallbackFunctionBase::ICloudRequestCallbackFunctionBase
            ((ICloudRequestCallbackFunctionBase *)param_1);
  *(undefined ***)param_1 = &PTR__ICloudRequestCallbackFunction_06844ac0;
  *(undefined8 *)(param_1 + 0x18) = in_x2;
  *(undefined8 *)(param_1 + 0x20) = in_x3;
  *(_func_void_bool_ptr **)(param_1 + 0x10) = param_2;
  return;
}


/* ICloudRequestCallbackFunction<UniverseWorldInfo, bool>::~ICloudRequestCallbackFunction() */

void __thiscall
ICloudRequestCallbackFunction<UniverseWorldInfo,bool>::~ICloudRequestCallbackFunction
          (ICloudRequestCallbackFunction<UniverseWorldInfo,bool> *this)

{
  *(undefined ***)this = &PTR__ICloudRequestCallbackFunction_068562c0;
  ICloudRequestCallbackFunctionBase::~ICloudRequestCallbackFunctionBase
            ((ICloudRequestCallbackFunctionBase *)this);
  return;
}


/* ICloudRequestCallbackFunction<UniverseWorldInfo, bool>::~ICloudRequestCallbackFunction() */

void __thiscall
ICloudRequestCallbackFunction<UniverseWorldInfo,bool>::~ICloudRequestCallbackFunction
          (ICloudRequestCallbackFunction<UniverseWorldInfo,bool> *this)

{
  ~ICloudRequestCallbackFunction(this);
  AK::FreeHook(this);
  return;
}


/* ICloudRequestCallbackFunction<UniverseWorldInfo,
   bool>::ICloudRequestCallbackFunction(UniverseWorldInfo*, void (UniverseWorldInfo::*)(bool
   const&)) */

void ICloudRequestCallbackFunction<UniverseWorldInfo,bool>::ICloudRequestCallbackFunction
               (UniverseWorldInfo *param_1,_func_void_bool_ptr *param_2)

{
  undefined8 in_x2;
  undefined8 in_x3;
  
  ICloudRequestCallbackFunctionBase::ICloudRequestCallbackFunctionBase
            ((ICloudRequestCallbackFunctionBase *)param_1);
  *(undefined ***)param_1 = &PTR__ICloudRequestCallbackFunction_068562c0;
  *(undefined8 *)(param_1 + 0x18) = in_x2;
  *(undefined8 *)(param_1 + 0x20) = in_x3;
  *(_func_void_bool_ptr **)(param_1 + 0x10) = param_2;
  return;
}


/* ICloudRequestCallbackFunction<PVZ2UIBuyAvatarDialog, bool>::~ICloudRequestCallbackFunction() */

void __thiscall
ICloudRequestCallbackFunction<PVZ2UIBuyAvatarDialog,bool>::~ICloudRequestCallbackFunction
          (ICloudRequestCallbackFunction<PVZ2UIBuyAvatarDialog,bool> *this)

{
  *(undefined ***)this = &PTR__ICloudRequestCallbackFunction_0690e0d0;
  ICloudRequestCallbackFunctionBase::~ICloudRequestCallbackFunctionBase
            ((ICloudRequestCallbackFunctionBase *)this);
  return;
}


/* ICloudRequestCallbackFunction<PVZ2UIBuyAvatarDialog, bool>::~ICloudRequestCallbackFunction() */

void __thiscall
ICloudRequestCallbackFunction<PVZ2UIBuyAvatarDialog,bool>::~ICloudRequestCallbackFunction
          (ICloudRequestCallbackFunction<PVZ2UIBuyAvatarDialog,bool> *this)

{
  ~ICloudRequestCallbackFunction(this);
  AK::FreeHook(this);
  return;
}


/* ICloudRequestCallbackFunction<PVZ2UIBuyAvatarDialog,
   bool>::ICloudRequestCallbackFunction(PVZ2UIBuyAvatarDialog*, void (PVZ2UIBuyAvatarDialog::*)(bool
   const&)) */

void ICloudRequestCallbackFunction<PVZ2UIBuyAvatarDialog,bool>::ICloudRequestCallbackFunction
               (PVZ2UIBuyAvatarDialog *param_1,_func_void_bool_ptr *param_2)

{
  undefined8 in_x2;
  undefined8 in_x3;
  
  ICloudRequestCallbackFunctionBase::ICloudRequestCallbackFunctionBase
            ((ICloudRequestCallbackFunctionBase *)param_1);
  *(undefined ***)param_1 = &PTR__ICloudRequestCallbackFunction_0690e0d0;
  *(undefined8 *)(param_1 + 0x18) = in_x2;
  *(undefined8 *)(param_1 + 0x20) = in_x3;
  *(_func_void_bool_ptr **)(param_1 + 0x10) = param_2;
  return;
}


/* ICloudRequestCallbackFunction<PVZ2UIBuyGachaDialog, bool>::~ICloudRequestCallbackFunction() */

void __thiscall
ICloudRequestCallbackFunction<PVZ2UIBuyGachaDialog,bool>::~ICloudRequestCallbackFunction
          (ICloudRequestCallbackFunction<PVZ2UIBuyGachaDialog,bool> *this)

{
  *(undefined ***)this = &PTR__ICloudRequestCallbackFunction_0690e470;
  ICloudRequestCallbackFunctionBase::~ICloudRequestCallbackFunctionBase
            ((ICloudRequestCallbackFunctionBase *)this);
  return;
}


/* ICloudRequestCallbackFunction<PVZ2UIBuyGachaDialog, bool>::~ICloudRequestCallbackFunction() */

void __thiscall
ICloudRequestCallbackFunction<PVZ2UIBuyGachaDialog,bool>::~ICloudRequestCallbackFunction
          (ICloudRequestCallbackFunction<PVZ2UIBuyGachaDialog,bool> *this)

{
  ~ICloudRequestCallbackFunction(this);
  AK::FreeHook(this);
  return;
}


/* ICloudRequestCallbackFunction<PVZ2UIBuyGachaDialog,
   bool>::ICloudRequestCallbackFunction(PVZ2UIBuyGachaDialog*, void (PVZ2UIBuyGachaDialog::*)(bool
   const&)) */

void ICloudRequestCallbackFunction<PVZ2UIBuyGachaDialog,bool>::ICloudRequestCallbackFunction
               (PVZ2UIBuyGachaDialog *param_1,_func_void_bool_ptr *param_2)

{
  undefined8 in_x2;
  undefined8 in_x3;
  
  ICloudRequestCallbackFunctionBase::ICloudRequestCallbackFunctionBase
            ((ICloudRequestCallbackFunctionBase *)param_1);
  *(undefined ***)param_1 = &PTR__ICloudRequestCallbackFunction_0690e470;
  *(undefined8 *)(param_1 + 0x18) = in_x2;
  *(undefined8 *)(param_1 + 0x20) = in_x3;
  *(_func_void_bool_ptr **)(param_1 + 0x10) = param_2;
  return;
}


/* ICloudRequestCallbackFunction<PVZ2UIUnlockPreview, bool>::~ICloudRequestCallbackFunction() */

void __thiscall
ICloudRequestCallbackFunction<PVZ2UIUnlockPreview,bool>::~ICloudRequestCallbackFunction
          (ICloudRequestCallbackFunction<PVZ2UIUnlockPreview,bool> *this)

{
  *(undefined ***)this = &PTR__ICloudRequestCallbackFunction_0690e9b0;
  ICloudRequestCallbackFunctionBase::~ICloudRequestCallbackFunctionBase
            ((ICloudRequestCallbackFunctionBase *)this);
  return;
}


/* ICloudRequestCallbackFunction<PVZ2UIUnlockPreview, bool>::~ICloudRequestCallbackFunction() */

void __thiscall
ICloudRequestCallbackFunction<PVZ2UIUnlockPreview,bool>::~ICloudRequestCallbackFunction
          (ICloudRequestCallbackFunction<PVZ2UIUnlockPreview,bool> *this)

{
  ~ICloudRequestCallbackFunction(this);
  AK::FreeHook(this);
  return;
}


/* ICloudRequestCallbackFunction<PVZ2UIUnlockPreview,
   bool>::ICloudRequestCallbackFunction(PVZ2UIUnlockPreview*, void (PVZ2UIUnlockPreview::*)(bool
   const&)) */

void ICloudRequestCallbackFunction<PVZ2UIUnlockPreview,bool>::ICloudRequestCallbackFunction
               (PVZ2UIUnlockPreview *param_1,_func_void_bool_ptr *param_2)

{
  undefined8 in_x2;
  undefined8 in_x3;
  
  ICloudRequestCallbackFunctionBase::ICloudRequestCallbackFunctionBase
            ((ICloudRequestCallbackFunctionBase *)param_1);
  *(undefined ***)param_1 = &PTR__ICloudRequestCallbackFunction_0690e9b0;
  *(undefined8 *)(param_1 + 0x18) = in_x2;
  *(undefined8 *)(param_1 + 0x20) = in_x3;
  *(_func_void_bool_ptr **)(param_1 + 0x10) = param_2;
  return;
}


/* ICloudRequestCallbackFunction<ActiveNationalDayTab, bool>::~ICloudRequestCallbackFunction() */

void __thiscall
ICloudRequestCallbackFunction<ActiveNationalDayTab,bool>::~ICloudRequestCallbackFunction
          (ICloudRequestCallbackFunction<ActiveNationalDayTab,bool> *this)

{
  *(undefined ***)this = &PTR__ICloudRequestCallbackFunction_06927410;
  ICloudRequestCallbackFunctionBase::~ICloudRequestCallbackFunctionBase
            ((ICloudRequestCallbackFunctionBase *)this);
  return;
}


/* ICloudRequestCallbackFunction<ActiveNationalDayTab, bool>::~ICloudRequestCallbackFunction() */

void __thiscall
ICloudRequestCallbackFunction<ActiveNationalDayTab,bool>::~ICloudRequestCallbackFunction
          (ICloudRequestCallbackFunction<ActiveNationalDayTab,bool> *this)

{
  ~ICloudRequestCallbackFunction(this);
  AK::FreeHook(this);
  return;
}


/* ICloudRequestCallbackFunction<ActiveNationalDayTab,
   bool>::ICloudRequestCallbackFunction(ActiveNationalDayTab*, void (ActiveNationalDayTab::*)(bool
   const&)) */

void ICloudRequestCallbackFunction<ActiveNationalDayTab,bool>::ICloudRequestCallbackFunction
               (ActiveNationalDayTab *param_1,_func_void_bool_ptr *param_2)

{
  undefined8 in_x2;
  undefined8 in_x3;
  
  ICloudRequestCallbackFunctionBase::ICloudRequestCallbackFunctionBase
            ((ICloudRequestCallbackFunctionBase *)param_1);
  *(undefined ***)param_1 = &PTR__ICloudRequestCallbackFunction_06927410;
  *(undefined8 *)(param_1 + 0x18) = in_x2;
  *(undefined8 *)(param_1 + 0x20) = in_x3;
  *(_func_void_bool_ptr **)(param_1 + 0x10) = param_2;
  return;
}


/* ICloudRequestCallbackFunction<BuyItemUI, bool>::~ICloudRequestCallbackFunction() */

void __thiscall
ICloudRequestCallbackFunction<BuyItemUI,bool>::~ICloudRequestCallbackFunction
          (ICloudRequestCallbackFunction<BuyItemUI,bool> *this)

{
  *(undefined ***)this = &PTR__ICloudRequestCallbackFunction_06929820;
  ICloudRequestCallbackFunctionBase::~ICloudRequestCallbackFunctionBase
            ((ICloudRequestCallbackFunctionBase *)this);
  return;
}


/* ICloudRequestCallbackFunction<BuyItemUI, bool>::~ICloudRequestCallbackFunction() */

void __thiscall
ICloudRequestCallbackFunction<BuyItemUI,bool>::~ICloudRequestCallbackFunction
          (ICloudRequestCallbackFunction<BuyItemUI,bool> *this)

{
  ~ICloudRequestCallbackFunction(this);
  AK::FreeHook(this);
  return;
}


/* ICloudRequestCallbackFunction<BuyItemUI, bool>::ICloudRequestCallbackFunction(BuyItemUI*, void
   (BuyItemUI::*)(bool const&)) */

void ICloudRequestCallbackFunction<BuyItemUI,bool>::ICloudRequestCallbackFunction
               (BuyItemUI *param_1,_func_void_bool_ptr *param_2)

{
  undefined8 in_x2;
  undefined8 in_x3;
  
  ICloudRequestCallbackFunctionBase::ICloudRequestCallbackFunctionBase
            ((ICloudRequestCallbackFunctionBase *)param_1);
  *(undefined ***)param_1 = &PTR__ICloudRequestCallbackFunction_06929820;
  *(undefined8 *)(param_1 + 0x18) = in_x2;
  *(undefined8 *)(param_1 + 0x20) = in_x3;
  *(_func_void_bool_ptr **)(param_1 + 0x10) = param_2;
  return;
}

