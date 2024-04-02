#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
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
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xe448ccfa, "wusb_dev_destroy" },
	{ 0x5a8f5b23, "usb_init_urb" },
	{ 0xa1f9a134, "__x86_indirect_thunk_rsi" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x84d8b1ac, "usb_kill_urb" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x87b8798d, "sg_next" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xf04de715, "usb_get_urb" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x3564bd60, "usb_unlink_urb" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf8efef11, "wusbhc_giveback_urb" },
	{ 0x8e620c65, "__wusb_dev_get_by_usb_dev" },
	{ 0xcacd7c13, "usb_hcd_link_urb_to_ep" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0x2edddbb7, "usb_control_msg" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xe50f373c, "usb_hcd_check_unlink_urb" },
	{ 0xe6478472, "_dev_info" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf770a6b4, "wusbd" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xcf5d91a1, "usb_get_intf" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x2a0e50d2, "wusbhc_handle_dn" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x121da905, "queue_work_on" },
	{ 0xa71dc27a, "wusbhc_reset_all" },
	{ 0xf851c0f, "usb_hcd_unlink_urb_from_ep" },
	{ 0xf00b771e, "usb_free_urb" },
	{ 0xe26cf5e3, "usb_alloc_urb" },
	{ 0xe0024da3, "usb_put_intf" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wusbcore";


MODULE_INFO(srcversion, "466C873AF6B393CB90609B1");
MODULE_INFO(rhelversion, "8.0");
