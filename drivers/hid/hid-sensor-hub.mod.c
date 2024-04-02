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
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xa22b7d0a, "hid_open_report" },
	{ 0x3793d409, "mfd_remove_devices" },
	{ 0x448eac3e, "kmemdup" },
	{ 0x23647549, "__hid_request" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xd7d5f9f1, "devm_kasprintf" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xfb578fc5, "memset" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x7544d0ce, "hid_hw_close" },
	{ 0x5edd0d58, "mfd_add_devices" },
	{ 0x7a3b5a07, "hid_hw_open" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xd0239c4a, "hid_set_field" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x86fae1be, "hid_hw_stop" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x90988a50, "__hid_register_driver" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x29361773, "complete" },
	{ 0x52fa86ad, "hid_hw_start" },
	{ 0xcc63e6cd, "hid_unregister_driver" },
	{ 0x3fa74627, "devm_kmalloc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("hid:b*g0003v*p*");

MODULE_INFO(srcversion, "F3E933C4D91149F01BEC22E");
MODULE_INFO(rhelversion, "8.0");
