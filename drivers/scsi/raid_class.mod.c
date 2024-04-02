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
	{ 0x2aec7605, "transport_class_register" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x67a74d32, "attribute_container_classdev_to_container" },
	{ 0xe637fa94, "dev_printk" },
	{ 0x8eb1fa29, "attribute_container_unregister" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x5d3062b8, "attribute_container_register" },
	{ 0xcca62a76, "device_add" },
	{ 0x338ef2db, "transport_class_unregister" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x2b5d9faa, "attribute_container_find_class_device" },
	{ 0xd0c86c05, "put_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x85ffabba, "get_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x551be51f, "device_initialize" },
	{ 0x6ecae48b, "device_unregister" },
	{ 0x28318305, "snprintf" },
	{ 0x76ca9e4e, "dev_set_name" },
	{ 0x5e5201f3, "scsi_is_sdev_device" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "2AF4C7B559E7AC0EA9B5F8E");
MODULE_INFO(rhelversion, "8.0");
