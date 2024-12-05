//
//  NGWidgetBaseData.h
//  NuanceGuideSDK
//
//  Copyright © 2018 Nuance. All rights reserved.
//

#import "NGBaseData.h"
#import "NGEnabledData.h"
#import "NGValidationData.h"
#import "NGVisibleData.h"
#import "NGGuideEventData.h"
#import "NGGuideRender.h"

typedef NS_ENUM(NSUInteger, NGWidgetType) {
    /** input */
    NGWidgetType_Input = 1,
    /** radio */
    NGWidgetType_Radio,
    /** checkbox */
    NGWidgetType_CheckBox,
    /** select */
    NGWidgetType_Select,
    /** button */
    NGWidgetType_Button,
    /** alert */
    NGWidgetType_Alert,
    /** list */
    NGWidgetType_ListGroup,
    /** list */
    NGWidgetType_ListSelectableGroup,
    /** heading */
    NGWidgetType_Heading,
    /** subtitle */
    NGWidgetType_Subtitle,
    /** QuickReply */
    NGWidgetType_QuickReplyButton,
    /** card */
    NGWidgetType_Card,
    /** card Deck*/
    NGWidgetType_CardDeck,
    /** Image*/
    NGWidgetType_Image,
    /** Paragraph*/
    NGWidgetType_Paragraph,
    /** Calendar*/
    NGWidgetType_Calendar,
     /** Switch*/
    NGWidgetType_Switch,
    /** Rating*/
    NGWidgetType_Rating,
    /** TextArea*/
    NGWidgetType_TextArea,
    /** InputGroup*/
    NGWidgetType_InputGroup,
    /** ColumnSet*/
    NGWidgetType_ColumnSet,
    /** Column*/
    NGWidgetType_Column,
    /** InputGroup*/
    NGWidgetType_ShortInput,
    /** InputButton*/
    NGWidgetType_ImageButton,
    /** CoverImage*/
    NGWidgetType_CoverImage,
    /** LinkPreview*/
    NGWidgetType_LinkPreview,
    /** TimePicker*/
    NGWidgetType_TimePicker,
    /** Box*/
    NGWidgetType_Box,
    /** ButtonGroup*/
    NGWidgetType_ButtonGroup,
    /** RowSet*/
    NGWidgetType_RowSet,
    /** Row*/
    NGWidgetType_Row,
    /** FormattedLinkText*/
    NGWidgetType_FormattedLinkText,
    /** GMap*/
    NGWidgetType_GMap,
    /** Slider*/
    NGWidgetType_Slider,
    /** Color Picker*/
    NGWidgetType_ColorPicker
};

@interface NGWidgetBaseData : NGBaseData
@property (nonatomic, assign) NGWidgetType          widgetType;
@property (nonatomic, strong) NSString              *widgetView;
@property (nonatomic, strong) NSString              *widgetAction;
@property (nonatomic, strong) NSString              *widgetId;
@property (nonatomic, strong) NSString              *columnId;
@property (nonatomic, strong) NGEnabledData         *enabled;
@property (nonatomic, strong) NGVisibleData         *visible;
@property (nonatomic, strong) NGValidationData      *validation;
@property (nonatomic, strong) NGGuideEventData      *event;
@property (nonatomic, strong) NSString              *defaultError;
@property (nonatomic, strong) NSString              *label;
@property (nonatomic) BOOL              forceDisable;
@property (nonatomic, strong) NSMutableArray *columnSetArray;
@property (nonatomic, strong) NSMutableArray *rowSetArray;
@property (nonatomic, strong) NSMutableArray *boxWidgetArray;
@property (nonatomic, strong) NGGuideRender *guideRender;
@property (nonatomic, strong) NSString *foreignWidgetId;
@property (nonatomic) BOOL           containsItems;

- (void)reset;
- (NGValidationResult *)checkValidation;
- (NSString *)getOutputText;
- (void)setupData;
@end

