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
	{ 0xf9a482f9, "msleep" },
	{ 0xf97d1a04, "hrtimer_cancel" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0x84d8b1ac, "usb_kill_urb" },
	{ 0xb20fe1f5, "rt2x00lib_resume" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xdc2ac18b, "usb_unanchor_urb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x1b22130a, "rt2x00lib_dmastart" },
	{ 0x16e3ac2d, "rt2x00queue_flush_queue" },
	{ 0x194811f6, "ieee80211_alloc_hw_nm" },
	{ 0x27e1a049, "printk" },
	{ 0x2edddbb7, "usb_control_msg" },
	{ 0x94dc37b6, "rt2x00queue_for_each_entry" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xcd56a40d, "rt2x00queue_start_queue" },
	{ 0x8d45615d, "rt2x00lib_remove_dev" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0x2fc8b141, "usb_get_dev" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0xdb1ff350, "rt2x00queue_get_entry" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x3b658c37, "usb_reset_device" },
	{ 0x9331cb39, "rt2x00lib_rxdone" },
	{ 0x871863c9, "usb_put_dev" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xdf243169, "hrtimer_init" },
	{ 0x275d5ec2, "ieee80211_free_hw" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x5df43743, "rt2x00lib_txdone_noinfo" },
	{ 0x121da905, "queue_work_on" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0xfeeee363, "rt2x00lib_dmadone" },
	{ 0xf00b771e, "usb_free_urb" },
	{ 0x95656336, "rt2x00lib_probe_dev" },
	{ 0x91736e8d, "rt2x00queue_stop_queue" },
	{ 0x7a806227, "rt2x00lib_suspend" },
	{ 0x482f8924, "usb_anchor_urb" },
	{ 0xeb9faa8b, "__skb_pad" },
	{ 0xe26cf5e3, "usb_alloc_urb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rt2x00lib,mac80211";


MODULE_INFO(srcversion, "4783320285808F336F94F86");
MODULE_INFO(rhelversion, "8.0");
