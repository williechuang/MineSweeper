/////////////////////////////////////////////////////////////////////////////////////////
//
//	Basic Component Class Define
//
/////////////////////////////////////////////////////////////////////////////////////////

// Graphic Object Type
#define GOT unsigned int
#define GOT_None			0x0000
#define GOT_Background		0x0001
#define GOT_Frame_Line		0x0002
#define GOT_Frame_Square	0x0004
#define GOT_Square			0x0008
#define GOT_All				GOT_Background | GOT_Frame_Line | GOT_Frame_Square | GOT_Square

//// Graphic Object Layer
//#define GOL unsigned int
//#define GOL_Top				0
//#define GOL_Background		9
//#define GOL_Bottom			10

// Graphic Component
class GC_Object
{
public:
	//	Type
	bool SetType(GOT i_type) { if( i_type & GOT_All ) {m_i_type = i_type; return true;} return false;}
	GOT GetType() {return m_i_type;}

	//	Position
	bool SetPosition(CPoint pt_pos) {return false;}
	bool SetPosition(unsigned int i_x, unsigned int i_y) {return false;}
	CPoint GetPosition() {return m_pt_pos;}
	bool GetPosition(unsigned int &i_x, unsigned int &i_y) {i_x = m_pt_pos.x; i_y = m_pt_pos.y; return true;}

	//	Size
	bool SetSize(CSize sz_box) {return false;}
	bool SetSize(unsigned int i_w, unsigned int i_h) {return false;}
	CSize GetSize() {return m_sz_box;}
	bool GetSize(unsigned int &i_w, unsigned int &i_h) {return false;}

	//	Valid
	void SetInvalid() { m_b_valid = false;}
	void SetValid() { m_b_valid = true;}
	bool IsValid() {return m_b_valid;}

private:
	GOT m_i_type;	
	CPoint m_pt_pos;
	CSize m_sz_box;
	bool m_b_valid;
};
