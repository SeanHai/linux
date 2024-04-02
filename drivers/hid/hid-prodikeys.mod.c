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
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x103b0514, "param_ops_charp" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0x6dc87645, "param_array_ops" },
	{ 0xcc63e6cd, "hid_unregister_driver" },
	{ 0x90988a50, "__hid_register_driver" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xfe7843b, "input_event" },
	{ 0xba63db57, "snd_card_free" },
	{ 0x23647549, "__hid_request" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x7e5cdd73, "snd_card_register" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x5d2f1135, "device_create_file" },
	{ 0x323ba4d1, "snd_rawmidi_set_ops" },
	{ 0x9166fada, "strncpy" },
	{ 0x51e0b936, "snd_rawmidi_new" },
	{ 0x110918bb, "snd_device_new" },
	{ 0x6c1eae2e, "snd_card_new" },
	{ 0x52fa86ad, "hid_hw_start" },
	{ 0xa22b7d0a, "hid_open_report" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xe6478472, "_dev_info" },
	{ 0x86fae1be, "hid_hw_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0xf7c28002, "snd_card_free_when_closed" },
	{ 0xf54d4211, "snd_card_disconnect" },
	{ 0x6b8d353d, "device_remove_file" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0x91715312, "sprintf" },
	{ 0x754d539c, "strlen" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x1c6763ac, "snd_rawmidi_receive" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x27e1a049, "printk" },
	{ 0x5495392, "hid_debug" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd,snd-rawmidi";

MODULE_ALIAS("hid:b0003g*v0000041Ep00002801");

MODULE_INFO(srcversion, "7C60E9409593F560432C281");
MODULE_INFO(rhelversion, "8.0");
