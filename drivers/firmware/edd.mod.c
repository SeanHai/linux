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
	{ 0x26fd227, "kset_unregister" },
	{ 0x2cec6038, "kobject_put" },
	{ 0x903c69e0, "kobject_uevent" },
	{ 0x2c2719bd, "pci_dev_put" },
	{ 0x5ef90e8e, "sysfs_create_link" },
	{ 0xdfe3440, "pci_get_domain_bus_and_slot" },
	{ 0x1daf1f8d, "sysfs_create_file_ns" },
	{ 0x71c0e774, "kobject_init_and_add" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xa967147b, "kset_create_and_add" },
	{ 0xcac40aec, "firmware_kobj" },
	{ 0x27e1a049, "printk" },
	{ 0x5a921311, "strncmp" },
	{ 0x28318305, "snprintf" },
	{ 0x11089ac7, "_ctype" },
	{ 0x4ca9669f, "scnprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x607b34f1, "edd" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "32852A4E58F7E466C4F80E3");
MODULE_INFO(rhelversion, "8.0");
