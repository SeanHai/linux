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
	{ 0x2d3385d3, "system_wq" },
	{ 0x6167700d, "em28xx_read_reg" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x10bce2f5, "rc_unregister_device" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x721f7cc7, "em28xx_free_device" },
	{ 0x54a7ee7e, "em28xx_write_regs" },
	{ 0xe637fa94, "dev_printk" },
	{ 0xf7340ca9, "i2c_transfer" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x68f927fb, "cancel_delayed_work_sync" },
	{ 0x338b1fd9, "em28xx_register_extension" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x963204a3, "rc_allocate_device" },
	{ 0xfe7843b, "input_event" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xd1d40ea0, "em28xx_find_led" },
	{ 0x7a30f3c2, "rc_free_device" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x78df7976, "em28xx_toggle_reg_bits" },
	{ 0xd491a78a, "rc_keydown" },
	{ 0xe3598ce1, "em28xx_unregister_extension" },
	{ 0xbebb99e4, "rc_register_device" },
	{ 0x35368810, "em28xx_write_reg_bits" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0xe6478472, "_dev_info" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf789deff, "input_register_device" },
	{ 0xdc75c81f, "input_free_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x67c6a5ce, "i2c_transfer_buffer_flags" },
	{ 0x37a0cba, "kfree" },
	{ 0xda0e8aec, "input_unregister_device" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x9a481cd7, "i2c_probe_func_quick_read" },
	{ 0x28318305, "snprintf" },
	{ 0x333bc724, "em28xx_write_reg" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xd55379f7, "input_allocate_device" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=em28xx,rc-core";


MODULE_INFO(srcversion, "A7F2F69B3915CB8DB5F16DC");
MODULE_INFO(rhelversion, "8.0");
