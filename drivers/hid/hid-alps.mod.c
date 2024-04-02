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
	{ 0xcc63e6cd, "hid_unregister_driver" },
	{ 0x90988a50, "__hid_register_driver" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x5494c2, "input_alloc_absinfo" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0xdc75c81f, "input_free_device" },
	{ 0xf789deff, "input_register_device" },
	{ 0xd55379f7, "input_allocate_device" },
	{ 0x7544d0ce, "hid_hw_close" },
	{ 0x6626afca, "down" },
	{ 0x1e429171, "input_mt_init_slots" },
	{ 0x822030b4, "input_set_abs_params" },
	{ 0xcf2a6966, "up" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x7a3b5a07, "hid_hw_open" },
	{ 0x37a0cba, "kfree" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xa1654d34, "input_mt_sync_frame" },
	{ 0x480ba3d3, "input_mt_report_slot_state" },
	{ 0xfe7843b, "input_event" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x52fa86ad, "hid_hw_start" },
	{ 0xa22b7d0a, "hid_open_report" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x86fae1be, "hid_hw_stop" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("hid:b*g*v0000044Ep0000120B");
MODULE_ALIAS("hid:b*g*v0000044Ep00001215");
MODULE_ALIAS("hid:b*g*v0000044Ep0000120C");

MODULE_INFO(srcversion, "F903BE6AAAA325DBAE436D0");
MODULE_INFO(rhelversion, "8.0");
