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
	{ 0xc351790f, "driver_unregister" },
	{ 0xb696ff00, "class_interface_unregister" },
	{ 0x2a71a178, "scsi_register_driver" },
	{ 0xb2e2dd7f, "scsi_register_interface" },
	{ 0x76d1f14a, "__scsi_iterate_devices" },
	{ 0x3d5e5d72, "enclosure_register" },
	{ 0x32533d9, "sas_get_address" },
	{ 0xbbdac2c5, "enclosure_for_each_device" },
	{ 0xf5344663, "scsi_is_sas_rphy" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x9ab3e4c, "enclosure_component_alloc" },
	{ 0x63c51c93, "enclosure_component_register" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x903c69e0, "kobject_uevent" },
	{ 0x2eca144f, "enclosure_add_device" },
	{ 0xfb578fc5, "memset" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x7d82f045, "__scsi_execute" },
	{ 0x91715312, "sprintf" },
	{ 0x8c8b629d, "enclosure_remove_device" },
	{ 0x93d967ac, "enclosure_unregister" },
	{ 0xd0c86c05, "put_device" },
	{ 0x37a0cba, "kfree" },
	{ 0xf434f084, "enclosure_find" },
	{ 0xb99b4c70, "sdev_prefix_printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=enclosure,scsi_transport_sas";


MODULE_INFO(srcversion, "4D3A91D176D592B3409EE1F");
MODULE_INFO(rhelversion, "8.0");
