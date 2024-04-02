#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xe6af07fa, "module_layout" },
	{ 0xf9a482f9, "msleep" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0xc41033c1, "seq_printf" },
	{ 0xcfa5c4f5, "oxygen_read16" },
	{ 0x326dabb1, "oxygen_pci_remove" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xf96af3d5, "oxygen_write8_masked" },
	{ 0x103b0514, "param_ops_charp" },
	{ 0xbd6c824e, "oxygen_write16_masked" },
	{ 0x69d32963, "oxygen_write_spi" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x9b614e93, "oxygen_pci_probe" },
	{ 0xd3038457, "snd_ctl_boolean_mono_info" },
	{ 0x4bbcc4f3, "oxygen_write16" },
	{ 0x81b69e41, "snd_ctl_enum_info" },
	{ 0xcc7c9e41, "snd_component_add" },
	{ 0x63db7318, "oxygen_read8" },
	{ 0x2edbb2fe, "snd_ctl_new1" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0xc8431a93, "oxygen_update_dac_routing" },
	{ 0x6dc87645, "param_array_ops" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0x44279ae7, "oxygen_pci_pm" },
	{ 0xae307d4b, "snd_ctl_add" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-oxygen-lib,snd";

MODULE_ALIAS("pci:v000013F6d00008788sv000010B0sd00000216bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv000010B0sd00000217bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv000010B0sd00000218bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv000010B0sd00000219bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv000013F6sd00000001bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv000013F6sd00000010bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv000013F6sd00008788bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv0000147Asd0000A017bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001A58sd00000910bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd00008467bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd00008521bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv000013F6sd00008782bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv000013F6sd0000FFFFbc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv000014C3sd00001710bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv000014C3sd00001711bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv0000415Asd00005431bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00005431sd0000017Abc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00007284sd00009761bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00007284sd00009781bc*sc*i*");

MODULE_INFO(srcversion, "D9B25F7C7CBA0DAAD9D51AD");
MODULE_INFO(rhelversion, "8.0");
