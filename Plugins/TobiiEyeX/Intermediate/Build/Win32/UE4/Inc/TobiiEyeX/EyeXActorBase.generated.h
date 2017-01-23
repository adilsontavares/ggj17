// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOBIIEYEX_EyeXActorBase_generated_h
#error "EyeXActorBase.generated.h already included, missing '#pragma once' in EyeXActorBase.h"
#endif
#define TOBIIEYEX_EyeXActorBase_generated_h

#define GGJ17_Plugins_TobiiEyeX_Source_TobiiEyeX_Public_EyeXActorBase_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHasGazeFocus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->HasGazeFocus(); \
		P_NATIVE_END; \
	}


#define GGJ17_Plugins_TobiiEyeX_Source_TobiiEyeX_Public_EyeXActorBase_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHasGazeFocus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->HasGazeFocus(); \
		P_NATIVE_END; \
	}


#define GGJ17_Plugins_TobiiEyeX_Source_TobiiEyeX_Public_EyeXActorBase_h_22_EVENT_PARMS
extern TOBIIEYEX_API  FName TOBIIEYEX_GotGazeFocusBP;
extern TOBIIEYEX_API  FName TOBIIEYEX_LostGazeFocusBP;
#define GGJ17_Plugins_TobiiEyeX_Source_TobiiEyeX_Public_EyeXActorBase_h_22_CALLBACK_WRAPPERS
#define GGJ17_Plugins_TobiiEyeX_Source_TobiiEyeX_Public_EyeXActorBase_h_22_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesAEyeXActorBase(); \
	friend TOBIIEYEX_API class UClass* Z_Construct_UClass_AEyeXActorBase(); \
	public: \
	DECLARE_CLASS(AEyeXActorBase, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TobiiEyeX"), NO_API) \
	DECLARE_SERIALIZER(AEyeXActorBase) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define GGJ17_Plugins_TobiiEyeX_Source_TobiiEyeX_Public_EyeXActorBase_h_22_INCLASS \
	private: \
	static void StaticRegisterNativesAEyeXActorBase(); \
	friend TOBIIEYEX_API class UClass* Z_Construct_UClass_AEyeXActorBase(); \
	public: \
	DECLARE_CLASS(AEyeXActorBase, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TobiiEyeX"), NO_API) \
	DECLARE_SERIALIZER(AEyeXActorBase) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define GGJ17_Plugins_TobiiEyeX_Source_TobiiEyeX_Public_EyeXActorBase_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEyeXActorBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEyeXActorBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEyeXActorBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEyeXActorBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEyeXActorBase(AEyeXActorBase&&); \
	NO_API AEyeXActorBase(const AEyeXActorBase&); \
public:


#define GGJ17_Plugins_TobiiEyeX_Source_TobiiEyeX_Public_EyeXActorBase_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEyeXActorBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEyeXActorBase(AEyeXActorBase&&); \
	NO_API AEyeXActorBase(const AEyeXActorBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEyeXActorBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEyeXActorBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEyeXActorBase)


#define GGJ17_Plugins_TobiiEyeX_Source_TobiiEyeX_Public_EyeXActorBase_h_22_PRIVATE_PROPERTY_OFFSET
#define GGJ17_Plugins_TobiiEyeX_Source_TobiiEyeX_Public_EyeXActorBase_h_19_PROLOG \
	GGJ17_Plugins_TobiiEyeX_Source_TobiiEyeX_Public_EyeXActorBase_h_22_EVENT_PARMS


#define GGJ17_Plugins_TobiiEyeX_Source_TobiiEyeX_Public_EyeXActorBase_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GGJ17_Plugins_TobiiEyeX_Source_TobiiEyeX_Public_EyeXActorBase_h_22_PRIVATE_PROPERTY_OFFSET \
	GGJ17_Plugins_TobiiEyeX_Source_TobiiEyeX_Public_EyeXActorBase_h_22_RPC_WRAPPERS \
	GGJ17_Plugins_TobiiEyeX_Source_TobiiEyeX_Public_EyeXActorBase_h_22_CALLBACK_WRAPPERS \
	GGJ17_Plugins_TobiiEyeX_Source_TobiiEyeX_Public_EyeXActorBase_h_22_INCLASS \
	GGJ17_Plugins_TobiiEyeX_Source_TobiiEyeX_Public_EyeXActorBase_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GGJ17_Plugins_TobiiEyeX_Source_TobiiEyeX_Public_EyeXActorBase_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GGJ17_Plugins_TobiiEyeX_Source_TobiiEyeX_Public_EyeXActorBase_h_22_PRIVATE_PROPERTY_OFFSET \
	GGJ17_Plugins_TobiiEyeX_Source_TobiiEyeX_Public_EyeXActorBase_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	GGJ17_Plugins_TobiiEyeX_Source_TobiiEyeX_Public_EyeXActorBase_h_22_CALLBACK_WRAPPERS \
	GGJ17_Plugins_TobiiEyeX_Source_TobiiEyeX_Public_EyeXActorBase_h_22_INCLASS_NO_PURE_DECLS \
	GGJ17_Plugins_TobiiEyeX_Source_TobiiEyeX_Public_EyeXActorBase_h_22_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class EyeXActorBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GGJ17_Plugins_TobiiEyeX_Source_TobiiEyeX_Public_EyeXActorBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
