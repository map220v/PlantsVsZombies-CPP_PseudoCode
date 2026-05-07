// Class: PushPlantGroupProps


/* PushPlantGroupProps::PushPlantGroupProps(Sexy::RtWeakPtr<PlantGroup>, int, int) */

void __thiscall
PushPlantGroupProps::PushPlantGroupProps
          (PushPlantGroupProps *this,RtWeakPtr *param_2,undefined4 param_3,undefined4 param_4)

{
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)this);
  this[0x10] = (PushPlantGroupProps)0x0;
  this[0x11] = (PushPlantGroupProps)0x0;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=((RtWeakPtr<PowerPropertySheet> *)this,param_2);
  *(undefined4 *)(this + 8) = param_3;
  *(undefined4 *)(this + 0xc) = param_4;
  return;
}

