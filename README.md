# NeuronRetargetingUE
An UnrealEngine Retargeting plugin for noitom mocap

Usage:
1. Put the NeuronRetargeting Plugin in you UnrealEngine's marketplace plugin folder.
2. Put the 'Foot Skate Cleanup' Node after NeuronLiveLink Node
![image](https://user-images.githubusercontent.com/2877762/189868960-03788d9d-b07d-495a-9ed7-f644e161a4f5.png)

3. Make sure dispalacement is turned on
![image](https://user-images.githubusercontent.com/2877762/190944771-4ad8e89d-451e-4069-a3f1-3b7775df38ff.png)

4. Setup the FSC node's properties.You can get the bone length data in the Axis Studio' skeleton setup page.
![image](https://user-images.githubusercontent.com/2877762/190944465-174dbe5f-7bd7-4730-b4ac-6008c4811c71.png)


## Known issues

### Will report missing NeuronRetargeting plugin files(.precompiled or .obj file) when building vs solution or packaging project if you use a Unreal Engine built form source in UE52(maybe UE53)

 There are some build issue when use source built engine when use prebuild files, you can copy files to the build system places

1. Remove NeuronRetargeting Plugin form Unreal Engine folder
2. Place the new downloaded NeuronRetargeting plugin to project's Plugins folder
3. Delete Project's Intermediate folder and regenerate the project vs solution
4. Open vs solution and build, the build will fail
5. According the build error copy prebuild files form NeuronRetargeting plugin's intermediate folder to project's intermediate folder
    Plugins\NeuronRetargeting\Intermediate\Build\Win64\UnrealGame\\* -> Intermediate\Build\Win64\<ProjName>\
    Plugins\NeuronRetargeting\Intermediate\Build\Win64\UnrealEditor\\* -> Intermediate\Build\Win64\<ProjName>Editor\
    Plugins\NeuronRetargeting\Intermediate\Build\Win64\x64\\* -> Intermediate\Build\Win64\x64\
6. Build the vs project again
7. Open Unreal project and package