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
	{ 0x92e26bf, "acpi_remove_address_space_handler" },
	{ 0xcc6f4a0c, "ipmi_smi_watcher_unregister" },
	{ 0x2e39c545, "ipmi_smi_watcher_register" },
	{ 0x27e1a049, "printk" },
	{ 0xdbcf041a, "acpi_install_address_space_handler" },
	{ 0x1a45cb6c, "acpi_disabled" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x4c2054d7, "ipmi_request_settime" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x1ec97303, "dev_driver_string" },
	{ 0xd1f579d0, "ipmi_free_recv_msg" },
	{ 0x29361773, "complete" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x37a0cba, "kfree" },
	{ 0xf388b18b, "ipmi_destroy_user" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xc4d9f382, "ipmi_create_user" },
	{ 0x85ffabba, "get_device" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd0c86c05, "put_device" },
	{ 0x6444c2bd, "ipmi_get_smi_info" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa1f9a134, "__x86_indirect_thunk_rsi" },
	{ 0xb348a850, "ex_handler_refcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ipmi_msghandler";


MODULE_INFO(srcversion, "FED05273990329979777491");
MODULE_INFO(rhelversion, "8.0");
