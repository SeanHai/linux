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
	{ 0x421dfbb0, "bus_register" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xb9d1be60, "pci_bus_type" },
	{ 0x93ac2ae4, "driver_register" },
	{ 0x5b1f6ffd, "release_resource" },
	{ 0x89e66458, "device_release_driver" },
	{ 0x8d710940, "pci_match_id" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x91715312, "sprintf" },
	{ 0xb3b42a38, "mutex_trylock" },
	{ 0xd257960c, "device_register" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x27e1a049, "printk" },
	{ 0xc351790f, "driver_unregister" },
	{ 0x7f7a5ec6, "device_attach" },
	{ 0xd831f284, "bus_unregister" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xd0c86c05, "put_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x85ffabba, "get_device" },
	{ 0x150e16f4, "device_for_each_child" },
	{ 0x37a0cba, "kfree" },
	{ 0x6ecae48b, "device_unregister" },
	{ 0x76ca9e4e, "dev_set_name" },
	{ 0x90a69df9, "request_resource" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "C1953F18D721E5B6CA1C048");
MODULE_INFO(rhelversion, "8.0");
