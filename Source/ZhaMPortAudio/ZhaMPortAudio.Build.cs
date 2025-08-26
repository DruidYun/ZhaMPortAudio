// Copyright Epic Games, Inc. All Rights Reserved.
using System.IO;
using UnrealBuildTool;

public class ZhaMPortAudio : ModuleRules
{
	public ZhaMPortAudio(ReadOnlyTargetRules Target) : base(Target)
	{
		// 使用共享 PCH，减少编译时间
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		// 添加依赖模块，确保 UHT 正确生成代码
		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine"
		});

		PrivateDependencyModuleNames.AddRange(new string[] {
				"Slate",
				"SlateCore",
				"ZhaMPortAudio"
			});
		// 获取插件目录路径
		string PluginPath = ModuleDirectory;
		string ThirdPartyPath = Path.Combine(PluginPath, "../../ThirdParty");

		if (Target.Platform == UnrealTargetPlatform.Win64)
		{
			PublicIncludePaths.AddRange(new string[] { Path.Combine(ThirdPartyPath, "include")});
			
			string DLLPath = Path.Combine(ThirdPartyPath, "Win64", "portaudio_x64.dll");
			
			// 添加运行时依赖，确保 DLL 被复制到 Binaries 目录
			RuntimeDependencies.Add("$(PluginDir)/Binaries/Win64/portaudio_x64.dll", DLLPath, StagedFileType.NonUFS);
			
			string LibPath = Path.Combine(ThirdPartyPath, "lib/portaudio_x64.lib");
			if (File.Exists(LibPath))
			{
				PublicAdditionalLibraries.Add(LibPath); // 添加导入库
			}
		}

	}
}
