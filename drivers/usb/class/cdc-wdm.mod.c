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
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0x84d8b1ac, "usb_kill_urb" },
	{ 0xd64657ae, "usb_deregister_dev" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0xf8a5b44d, "usb_autopm_get_interface" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x4a928de6, "mutex_lock_interruptible" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x79f91166, "usb_register_dev" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x85d45f4d, "noop_llseek" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe6478472, "_dev_info" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xf1f6a13c, "cdc_parse_cdc_header" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x121da905, "queue_work_on" },
	{ 0xb0e602eb, "memmove" },
	{ 0xf00b771e, "usb_free_urb" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xcf01d9aa, "usb_autopm_put_interface" },
	{ 0xe26cf5e3, "usb_alloc_urb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc09ip*in*");

MODULE_INFO(srcversion, "2AF62BD76951748211A1082");
MODULE_INFO(rhelversion, "8.0");
