// Class: eastl::rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>


/* eastl::rbtree_iterator<eastl::pair<eastl::pair<unsigned short, unsigned short> const,
   EA::Text::Kerning>, eastl::pair<eastl::pair<unsigned short, unsigned short> const,
   EA::Text::Kerning>*, eastl::pair<eastl::pair<unsigned short, unsigned short> const,
   EA::Text::Kerning>&>::rbtree_iterator(eastl::rbtree_node<eastl::pair<eastl::pair<unsigned short,
   unsigned short> const, EA::Text::Kerning> > const*) */

void __thiscall
eastl::
rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
::rbtree_iterator(rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
                  *this,rbtree_node *param_1)

{
  *(rbtree_node **)this = param_1;
  return;
}


/* eastl::rbtree_iterator<eastl::pair<eastl::pair<unsigned short, unsigned short> const,
   EA::Text::Kerning>, eastl::pair<eastl::pair<unsigned short, unsigned short> const,
   EA::Text::Kerning> const*, eastl::pair<eastl::pair<unsigned short, unsigned short> const,
   EA::Text::Kerning> const&>::TEMPNAMEPLACEHOLDERVALUE() const */

long __thiscall
eastl::
rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const&>
::operator*(rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const&>
            *this)

{
  return *(long *)this + 0x20;
}


/* eastl::rbtree_iterator<EA::Text::Rectangle, EA::Text::Rectangle const*, EA::Text::Rectangle
   const&>::TEMPNAMEPLACEHOLDERVALUE() */

rbtree_iterator<EA::Text::Rectangle,EA::Text::Rectangle_const*,EA::Text::Rectangle_const&> *
__thiscall
eastl::rbtree_iterator<EA::Text::Rectangle,EA::Text::Rectangle_const*,EA::Text::Rectangle_const&>::
operator++(rbtree_iterator<EA::Text::Rectangle,EA::Text::Rectangle_const*,EA::Text::Rectangle_const&>
           *this)

{
  undefined8 uVar1;
  
  uVar1 = RBTreeIncrement(*(rbtree_node_base **)this);
  *(undefined8 *)this = uVar1;
  return this;
}

