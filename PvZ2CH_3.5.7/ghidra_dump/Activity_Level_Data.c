// Class: Activity_Level_Data


/* Activity_Level_Data::Activity_Level_Data(Activity_Level_Data&&) */

void __thiscall
Activity_Level_Data::Activity_Level_Data(Activity_Level_Data *this,Activity_Level_Data *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)this = uVar1;
  *(undefined4 *)(this + 4) = uVar2;
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x10),(vector *)(param_1 + 0x10));
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x28),(vector *)(param_1 + 0x28));
  return;
}


/* Activity_Level_Data::Activity_Level_Data() */

void __thiscall Activity_Level_Data::Activity_Level_Data(Activity_Level_Data *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  return;
}


/* Activity_Level_Data::CanBuyTimes() */

bool __thiscall Activity_Level_Data::CanBuyTimes(Activity_Level_Data *this)

{
  return 0 < *(int *)(this + 8);
}


/* Activity_Level_Data::GetCurrentPrice() */

undefined4 __thiscall Activity_Level_Data::GetCurrentPrice(Activity_Level_Data *this)

{
  int iVar1;
  ulong uVar2;
  undefined4 *puVar3;
  
  iVar1 = *(int *)(this + 8);
  if (0 < iVar1) {
    uVar2 = FUN_04ba835c(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x18));
    if ((ulong)(long)iVar1 <= uVar2) {
      puVar3 = (undefined4 *)
               std::vector<int,std::allocator<int>>::at
                         ((vector<int,std::allocator<int>> *)(this + 0x10),uVar2 - (long)iVar1);
      return *puVar3;
    }
  }
  return 0xffffffff;
}

