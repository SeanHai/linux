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
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x78040ede, "pci_bus_write_config_dword" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0xebad434c, "pci_bus_read_config_dword" },
	{ 0x109525c0, "pv_cpu_ops" },
	{ 0xc69c9a1f, "devm_hwmon_device_register_with_groups" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x15244c9d, "boot_cpu_data" },
	{ 0xfc37562, "amd_smn_read" },
	{ 0xad27f361, "__warn_printk" },
	{ 0xe8e202b6, "node_to_amd_nb" },
	{ 0x81221cad, "amd_nb_num" },
	{ 0xe1f4fcf5, "pci_read_config_dword" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x91715312, "sprintf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001022d00001203sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001303sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001703sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001603sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001403sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d0000141Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001573sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d000015B3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001533sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001583sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001463sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d000015EBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001493sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "7D4516D9D9513525F76DB14");
MODULE_INFO(rhelversion, "8.0");
