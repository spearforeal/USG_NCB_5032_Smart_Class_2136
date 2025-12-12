namespace PresetDriver;
        // class declarations
         class PresetClient;
         class PresetFileManager;
         class PresetConfig;
         class PresetRecord;
     class PresetClient 
    {
        // class delegates
        delegate FUNCTION InitializedEvent ( INTEGER state );
        delegate FUNCTION WindowPresetChangedDelegate ( INTEGER value );
        delegate FUNCTION OutputValueChangedDelegate ( INTEGER index , INTEGER value );
        delegate FUNCTION PresetCountHandler ( INTEGER count );
        delegate FUNCTION PresetNameHandler ( INTEGER index , SIMPLSHARPSTRING name );
        delegate FUNCTION UshortValue ( INTEGER value );

        // class events

        // class functions
        FUNCTION Debug ( STRING message );
        FUNCTION Initialize ( STRING debugName );
        FUNCTION RecallPresetByIndex ( INTEGER index );
        FUNCTION RecallPresetByName ( SIMPLSHARPSTRING name );
        FUNCTION RequestWindowPreset ();
        FUNCTION RequestOutput ( INTEGER index );
        FUNCTION RequestAllOutputs ();
        SIGNED_LONG_INTEGER_FUNCTION SavePresets ();
        SIGNED_LONG_INTEGER_FUNCTION OverwriteCurrentPreset8 ( INTEGER window , INTEGER o1 , INTEGER o2 , INTEGER o3 , INTEGER o4 , INTEGER o5 , INTEGER o6 , INTEGER o7 , INTEGER o8 );
        SIGNED_LONG_INTEGER_FUNCTION OverwriteCurrentPreset8Masked ( INTEGER window , INTEGER applyMask , INTEGER o1 , INTEGER o2 , INTEGER o3 , INTEGER o4 , INTEGER o5 , INTEGER o6 , INTEGER o7 , INTEGER o8 );
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER DebugEnable;
        STRING _fileName[];

        // class properties
        DelegateProperty InitializedEvent Initialized;
        DelegateProperty WindowPresetChangedDelegate WindowPresetChanged;
        DelegateProperty OutputValueChangedDelegate OutputValueChanged;
        DelegateProperty PresetCountHandler OnPresetCount;
        DelegateProperty PresetNameHandler OnPresetName;
        DelegateProperty UshortValue Output1Changed;
        DelegateProperty UshortValue Output2Changed;
        DelegateProperty UshortValue Output3Changed;
        DelegateProperty UshortValue Output4Changed;
        DelegateProperty UshortValue Output5Changed;
        DelegateProperty UshortValue Output6Changed;
        DelegateProperty UshortValue Output7Changed;
        DelegateProperty UshortValue Output8Changed;
    };

     class PresetConfig 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

     class PresetRecord 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        INTEGER windowPreset;
    };

