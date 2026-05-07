// Class: UnchartedModeWorldData


/* UnchartedModeWorldData::~UnchartedModeWorldData() */

void __thiscall UnchartedModeWorldData::~UnchartedModeWorldData(UnchartedModeWorldData *this)

{
  std::vector<UnchartedModeBoostData,std::allocator<UnchartedModeBoostData>>::~vector
            ((vector<UnchartedModeBoostData,std::allocator<UnchartedModeBoostData>> *)(this + 0x100)
            );
  std::vector<UnchartedModeBoardRecord,std::allocator<UnchartedModeBoardRecord>>::~vector
            ((vector<UnchartedModeBoardRecord,std::allocator<UnchartedModeBoardRecord>> *)
             (this + 0xe8));
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 200));
  std::vector<UnchartedModeFestivalRewardData,std::allocator<UnchartedModeFestivalRewardData>>::
  ~vector((vector<UnchartedModeFestivalRewardData,std::allocator<UnchartedModeFestivalRewardData>> *
          )(this + 0xb0));
  std::vector<UnchartedModeStarRewardData,std::allocator<UnchartedModeStarRewardData>>::~vector
            ((vector<UnchartedModeStarRewardData,std::allocator<UnchartedModeStarRewardData>> *)
             (this + 0x98));
  std::vector<UnchartedModeLevelData,std::allocator<UnchartedModeLevelData>>::~vector
            ((vector<UnchartedModeLevelData,std::allocator<UnchartedModeLevelData>> *)(this + 0x80))
  ;
  std::vector<UnchartedModeLevelData,std::allocator<UnchartedModeLevelData>>::~vector
            ((vector<UnchartedModeLevelData,std::allocator<UnchartedModeLevelData>> *)(this + 0x68))
  ;
  std::
  vector<std::vector<UnchartedBirthdayTaskInfo,std::allocator<UnchartedBirthdayTaskInfo>>,std::allocator<std::vector<UnchartedBirthdayTaskInfo,std::allocator<UnchartedBirthdayTaskInfo>>>>
  ::~vector((vector<std::vector<UnchartedBirthdayTaskInfo,std::allocator<UnchartedBirthdayTaskInfo>>,std::allocator<std::vector<UnchartedBirthdayTaskInfo,std::allocator<UnchartedBirthdayTaskInfo>>>>
             *)(this + 0x50));
  std::string::~string((string *)(this + 0x30));
  std::string::~string((string *)(this + 0x28));
  std::string::~string((string *)(this + 0x20));
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)this);
  return;
}


/* UnchartedModeWorldData::UnchartedModeWorldData(UnchartedModeWorldData const&) */

void __thiscall
UnchartedModeWorldData::UnchartedModeWorldData
          (UnchartedModeWorldData *this,UnchartedModeWorldData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)this,(vector *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x18) = uVar1;
  FUN_05475d88(this + 0x20,param_1 + 0x20);
  FUN_05475d88(this + 0x28,param_1 + 0x28);
  FUN_05475d88(this + 0x30,param_1 + 0x30);
  uVar1 = *(undefined4 *)(param_1 + 0x38);
  uVar2 = *(undefined4 *)(param_1 + 0x3c);
  uVar3 = *(undefined4 *)(param_1 + 0x40);
  uVar4 = *(undefined4 *)(param_1 + 0x44);
  uVar5 = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(this + 0x38) = uVar1;
  *(undefined4 *)(this + 0x3c) = uVar2;
  *(undefined4 *)(this + 0x40) = uVar3;
  *(undefined4 *)(this + 0x44) = uVar4;
  *(undefined4 *)(this + 0x48) = uVar5;
  std::
  vector<std::vector<UnchartedBirthdayTaskInfo,std::allocator<UnchartedBirthdayTaskInfo>>,std::allocator<std::vector<UnchartedBirthdayTaskInfo,std::allocator<UnchartedBirthdayTaskInfo>>>>
  ::vector((vector<std::vector<UnchartedBirthdayTaskInfo,std::allocator<UnchartedBirthdayTaskInfo>>,std::allocator<std::vector<UnchartedBirthdayTaskInfo,std::allocator<UnchartedBirthdayTaskInfo>>>>
            *)(this + 0x50),(vector *)(param_1 + 0x50));
  std::vector<UnchartedModeLevelData,std::allocator<UnchartedModeLevelData>>::vector
            ((vector<UnchartedModeLevelData,std::allocator<UnchartedModeLevelData>> *)(this + 0x68),
             (vector *)(param_1 + 0x68));
  std::vector<UnchartedModeLevelData,std::allocator<UnchartedModeLevelData>>::vector
            ((vector<UnchartedModeLevelData,std::allocator<UnchartedModeLevelData>> *)(this + 0x80),
             (vector *)(param_1 + 0x80));
  std::vector<UnchartedModeStarRewardData,std::allocator<UnchartedModeStarRewardData>>::vector
            ((vector<UnchartedModeStarRewardData,std::allocator<UnchartedModeStarRewardData>> *)
             (this + 0x98),(vector *)(param_1 + 0x98));
  std::vector<UnchartedModeFestivalRewardData,std::allocator<UnchartedModeFestivalRewardData>>::
  vector((vector<UnchartedModeFestivalRewardData,std::allocator<UnchartedModeFestivalRewardData>> *)
         (this + 0xb0),(vector *)(param_1 + 0xb0));
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 200),
             (vector *)(param_1 + 200));
  uVar1 = *(undefined4 *)(param_1 + 0xe4);
  *(undefined4 *)(this + 0xe0) = *(undefined4 *)(param_1 + 0xe0);
  *(undefined4 *)(this + 0xe4) = uVar1;
  std::vector<UnchartedModeBoardRecord,std::allocator<UnchartedModeBoardRecord>>::vector
            ((vector<UnchartedModeBoardRecord,std::allocator<UnchartedModeBoardRecord>> *)
             (this + 0xe8),(vector *)(param_1 + 0xe8));
  std::vector<UnchartedModeBoostData,std::allocator<UnchartedModeBoostData>>::vector
            ((vector<UnchartedModeBoostData,std::allocator<UnchartedModeBoostData>> *)(this + 0x100)
             ,(vector *)(param_1 + 0x100));
  return;
}


/* UnchartedModeWorldData::UnchartedModeWorldData() */

void __thiscall UnchartedModeWorldData::UnchartedModeWorldData(UnchartedModeWorldData *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)this);
  Set8BytesTo0(this + 0x20);
  Set8BytesTo0(this + 0x28);
  Set8BytesTo0(this + 0x30);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x50));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x68));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x80));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x98));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xb0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 200));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xe8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x100));
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0xe4) = 0;
  return;
}


/* UnchartedModeWorldData::UnchartedModeWorldData(UnchartedModeWorldData&&) */

void __thiscall
UnchartedModeWorldData::UnchartedModeWorldData
          (UnchartedModeWorldData *this,UnchartedModeWorldData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)this,
             (vector *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x18) = uVar1;
  FUN_05474148(this + 0x20,param_1 + 0x20);
  FUN_05474148(this + 0x28,param_1 + 0x28);
  FUN_05474148(this + 0x30,param_1 + 0x30);
  uVar1 = *(undefined4 *)(param_1 + 0x38);
  uVar2 = *(undefined4 *)(param_1 + 0x3c);
  uVar3 = *(undefined4 *)(param_1 + 0x40);
  uVar4 = *(undefined4 *)(param_1 + 0x44);
  uVar5 = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(this + 0x38) = uVar1;
  *(undefined4 *)(this + 0x3c) = uVar2;
  *(undefined4 *)(this + 0x40) = uVar3;
  *(undefined4 *)(this + 0x44) = uVar4;
  *(undefined4 *)(this + 0x48) = uVar5;
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x50),(vector *)(param_1 + 0x50));
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x68),(vector *)(param_1 + 0x68));
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x80),(vector *)(param_1 + 0x80));
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x98),(vector *)(param_1 + 0x98));
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0xb0),(vector *)(param_1 + 0xb0));
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 200),(vector *)(param_1 + 200));
  uVar1 = *(undefined4 *)(param_1 + 0xe4);
  *(undefined4 *)(this + 0xe0) = *(undefined4 *)(param_1 + 0xe0);
  *(undefined4 *)(this + 0xe4) = uVar1;
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0xe8),(vector *)(param_1 + 0xe8));
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x100),(vector *)(param_1 + 0x100));
  return;
}

