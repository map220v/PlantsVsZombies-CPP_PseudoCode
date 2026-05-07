// Class: HintImage


/* HintImage::HintImage() */

void __thiscall HintImage::HintImage(HintImage *this)

{
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)this);
  Sexy::Insets::Insets((Insets *)(this + 8),0,0,0,0);
  return;
}


/* HintImage::HintImage(HintImage const&) */

void __thiscall HintImage::HintImage(HintImage *this,HintImage *param_1)

{
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)this,(RtWeakPtrBase *)param_1);
  Sexy::Insets::Insets((Insets *)(this + 8),(Insets *)(param_1 + 8));
  return;
}

