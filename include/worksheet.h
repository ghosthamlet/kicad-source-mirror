/***************/
/* worksheet.h */
/***************/

// For page and paper size, values are in 1/1000 inch

#ifndef WORKSHEET_H_
#define WORKSHEET_H_

// Forwadr declarations:
class EDA_DRAW_PANEL;
class TITLE_BLOCK;
class PAGE_INFO;


struct Ki_WorkSheetData
{
public:
    int               m_Type;
    Ki_WorkSheetData* Pnext;
    int               m_Posx, m_Posy;
    int               m_Endx, m_Endy;
    const wxChar*     m_Legende;
    const wxChar*     m_Text;
};

/**
 * Function DrawPageLayout is a core function to draw the page layout with
 * the frame and the basic inscriptions.
 * @param aDC The device context.
 * @param aCanvas The EDA_DRAW_PANEL to draw into, or NULL if the page
 *  layout is not drawn into the main panel.
 * @param aPageInfo for margins and page siez (in mils).
 * @param aPaperFormat The paper size type, for basic inscriptions.
 * @param aFullSheetName The sheetpath (full sheet name), for basic inscriptions.
 * @param aFileName The file name, for basic inscriptions.
 * @param aTitleBlock The sheet title block, for basic inscriptions.
 * @param aSheetCount The number of sheets (for basic inscriptions).
 * @param aSheetNumber The sheet number (for basic inscriptions).
 * @param aPenWidth the pen size The line width for drawing.
 * @param aScalar the scale factor to convert from mils to internal units.
 * @param aLineColor The color for drawing.
 * @param aTextColor The color for inscriptions.
 *
 * Parameters used in aPageInfo
 * - the size of the page layout.
 * - the LTmargin The left top margin of the page layout.
 * - the RBmargin The right bottom margin of the page layout.
 */
void DrawPageLayout( wxDC* aDC, EDA_DRAW_PANEL * aCanvas,
                     const PAGE_INFO& aPageInfo,
                     const wxString& aPaperFormat,
                     const wxString &aFullSheetName,
                     const wxString& aFileName,
                     TITLE_BLOCK& aTitleBlock,
                     int aSheetCount, int aSheetNumber,
                     int aPenWidth, double aScalar,
                     EDA_COLOR_T aLineColor, EDA_COLOR_T aTextColor );

#endif // WORKSHEET_H_
