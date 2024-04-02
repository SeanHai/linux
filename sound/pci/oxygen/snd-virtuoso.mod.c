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
	{ 0x58388972, "pv_lock_ops" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0xc41033c1, "seq_printf" },
	{ 0xcfa5c4f5, "oxygen_read16" },
	{ 0x326dabb1, "oxygen_pci_remove" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xf96af3d5, "oxygen_write8_masked" },
	{ 0x103b0514, "param_ops_charp" },
	{ 0xbd6c824e, "oxygen_write16_masked" },
	{ 0x70491e20, "oxygen_write_ac97_masked" },
	{ 0xe823ffd0, "snd_ctl_notify" },
	{ 0x69d32963, "oxygen_write_spi" },
	{ 0x505f0e10, "dev_crit" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x9b614e93, "oxygen_pci_probe" },
	{ 0xefc8c7b8, "snd_jack_new" },
	{ 0xd3038457, "snd_ctl_boolean_mono_info" },
	{ 0x4bbcc4f3, "oxygen_write16" },
	{ 0x81b69e41, "snd_ctl_enum_info" },
	{ 0x2ae2fdba, "dev_notice" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0xcc7c9e41, "snd_component_add" },
	{ 0x63db7318, "oxygen_read8" },
	{ 0xc01bd45a, "oxygen_reset_uart" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2edbb2fe, "snd_ctl_new1" },
	{ 0x9810ffc0, "oxygen_write_uart" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x6dc87645, "param_array_ops" },
	{ 0x5ebc6d8c, "oxygen_write_i2c" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0x44279ae7, "oxygen_pci_pm" },
	{ 0x84ee9faa, "oxygen_pci_shutdown" },
	{ 0xb42c1d69, "snd_jack_report" },
	{ 0xae307d4b, "snd_ctl_add" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-oxygen-lib,snd";

MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd00008269bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd00008275bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd000082B7bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd00008314bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd00008327bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd0000834Fbc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd0000835Cbc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd0000835Dbc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd0000835Ebc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd0000838Ebc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd00008428bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd00008522bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd000085F4bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv000013F6sd00008788bc*sc*i*");

MODULE_INFO(srcversion, "0CEFD44D5DCEEE5C47FA937");
MODULE_INFO(rhelversion, "8.0");
