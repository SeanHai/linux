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
	{ 0xd7258a3c, "dev_warn" },
	{ 0xcf2a6966, "up" },
	{ 0x7a3b5a07, "hid_hw_open" },
	{ 0x52fa86ad, "hid_hw_start" },
	{ 0xa390f2f4, "hid_validate_values" },
	{ 0xa22b7d0a, "hid_open_report" },
	{ 0x97868aef, "__kfifo_alloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x43862d4a, "hid_add_device" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x28318305, "snprintf" },
	{ 0xc3db023b, "hid_allocate_device" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x23647549, "__hid_request" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x1a6f54b2, "hid_input_report" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x121da905, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x2830c41c, "hid_parse_report" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x27e1a049, "printk" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x37a0cba, "kfree" },
	{ 0x1c602b69, "hid_destroy_device" },
	{ 0x86fae1be, "hid_hw_stop" },
	{ 0x7544d0ce, "hid_hw_close" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0x5495392, "hid_debug" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("hid:b0003g*v0000046Dp0000C52B");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C532");

MODULE_INFO(srcversion, "13DD6CFADDA19B44113716A");
MODULE_INFO(rhelversion, "8.0");
