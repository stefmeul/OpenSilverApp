// <OpenSilver><XamlHash>5DC0566555C82A2D900F67C0138541A7</XamlHash><CompilationDate>05/01/2024 23:49:51</CompilationDate></OpenSilver>



//------------------------------------------------------------------------------
// <auto-generated>
//     This code was auto-generated by "C#/XAML for HTML5"
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

[global::System.Diagnostics.DebuggerNonUserCodeAttribute()]
[global::System.ComponentModel.EditorBrowsable(global::System.ComponentModel.EditorBrowsableState.Never)]
public sealed class ǀǀOpensilverappǀǀComponentǀǀAppǀǀXamlǀǀFactory : global::OpenSilver.Internal.Xaml.IXamlComponentFactory<global::OpenSilverApp.App>, global::OpenSilver.Internal.Xaml.IXamlComponentLoader<global::OpenSilverApp.App>
{
    public static object Instantiate()
    {
        return CreateComponentImpl();
    }

    global::OpenSilverApp.App global::OpenSilver.Internal.Xaml.IXamlComponentFactory<global::OpenSilverApp.App>.CreateComponent()
    {
        return CreateComponentImpl();
    }

    object global::OpenSilver.Internal.Xaml.IXamlComponentFactory.CreateComponent()
    {
        return CreateComponentImpl();
    }

    void global::OpenSilver.Internal.Xaml.IXamlComponentLoader<global::OpenSilverApp.App>.LoadComponent(global::OpenSilverApp.App component)
    {
        LoadComponentImpl(component);
    }

    void global::OpenSilver.Internal.Xaml.IXamlComponentLoader.LoadComponent(object component)
    {
        LoadComponentImpl((global::OpenSilverApp.App)component);
    }

    private static void LoadComponentImpl(global::OpenSilverApp.App application_b11c0cd8edd94abdb2779ddd15c57997)
    {
        if ((object)application_b11c0cd8edd94abdb2779ddd15c57997 is global::System.Windows.UIElement)
        {
            ((global::System.Windows.UIElement)(object)application_b11c0cd8edd94abdb2779ddd15c57997).XamlSourcePath = @"OpenSilverApp\App.xaml";
        }

        var xamlContext_f59766533fa14da3be8bce522285d6dd = global::OpenSilver.Internal.Xaml.RuntimeHelpers.Create_XamlContext();
_ = global::OpenSilver.Internal.Xaml.RuntimeHelpers.XamlContext_WriteStartObject(xamlContext_f59766533fa14da3be8bce522285d6dd, application_b11c0cd8edd94abdb2779ddd15c57997);
var resourceDictionary_a4dfb040e64a47508a6596b44220c6ff = New_resourceDictionary_a4dfb040e64a47508a6596b44220c6ff(xamlContext_f59766533fa14da3be8bce522285d6dd);
global::OpenSilver.Internal.Xaml.RuntimeHelpers.XamlContext_WriteEndObject(xamlContext_f59766533fa14da3be8bce522285d6dd);
application_b11c0cd8edd94abdb2779ddd15c57997.Resources = resourceDictionary_a4dfb040e64a47508a6596b44220c6ff;
global::OpenSilver.Internal.Xaml.RuntimeHelpers.XamlContext_WriteEndObject(xamlContext_f59766533fa14da3be8bce522285d6dd);

    }

    private static global::OpenSilverApp.App CreateComponentImpl()
    {
        return (global::OpenSilverApp.App)global::CSHTML5.Internal.TypeInstantiationHelper.Instantiate(typeof(global::OpenSilverApp.App));
    }

    private static global::System.Windows.ResourceDictionary New_resourceDictionary_a4dfb040e64a47508a6596b44220c6ff(global::OpenSilver.Internal.Xaml.Context.XamlContext xamlContext_2e667e71b0744ef1930b16af2a2f5712)
{
var resourceDictionary_a4dfb040e64a47508a6596b44220c6ff = global::OpenSilver.Internal.Xaml.RuntimeHelpers.XamlContext_WriteStartObject(xamlContext_2e667e71b0744ef1930b16af2a2f5712, new global::System.Windows.ResourceDictionary());
return resourceDictionary_a4dfb040e64a47508a6596b44220c6ff;
}

}


namespace OpenSilverApp
{

public partial class App : global::System.Windows.Application, global::OpenSilver.Internal.Xaml.IComponentConnector
{

#pragma warning disable 169, 649, 0628 // Prevents warning CS0169 ('field ... is never used'), CS0649 ('field ... is never assigned to, and will always have its default value null'), and CS0628 ('member : new protected member declared in sealed class')

#pragma warning restore 169, 649, 0628

private App(global::OpenSilver.XamlDesignerConstructorStub stub) { InitializeComponent(); }


        private bool _contentLoaded;

        /// <summary>
        /// InitializeComponent
        /// </summary>
        public void InitializeComponent()
        {
            if (_contentLoaded) 
            {
                return;
            }
            _contentLoaded = true;
            
global::CSHTML5.Internal.StartupAssemblyInfo.OutputRootPath = @"wwwroot\";
global::CSHTML5.Internal.StartupAssemblyInfo.OutputAppFilesPath = @"app\";
global::CSHTML5.Internal.StartupAssemblyInfo.OutputLibrariesPath = @"libs\";
global::CSHTML5.Internal.StartupAssemblyInfo.OutputResourcesPath = @"resources\";

            global::System.Windows.Application.LoadComponent(this, new global::ǀǀOpensilverappǀǀComponentǀǀAppǀǀXamlǀǀFactory());
            
        }


        [global::System.Diagnostics.DebuggerNonUserCodeAttribute()]
        [global::System.ComponentModel.EditorBrowsable(global::System.ComponentModel.EditorBrowsableState.Never)]
        void global::OpenSilver.Internal.Xaml.IComponentConnector.Connect(int componentId, object target)
        {
        }

}

}
