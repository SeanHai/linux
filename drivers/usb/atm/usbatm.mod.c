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
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x8133c67d, "complete_and_exit" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xae55feaa, "send_sig" },
	{ 0x84d8b1ac, "usb_kill_urb" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0xe6672d2b, "__dev_kfree_skb_any" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0xac9835f, "atm_charge" },
	{ 0x91715312, "sprintf" },
	{ 0xd4cb0e33, "vcc_release_async" },
	{ 0xeb81585a, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5b5a9263, "skb_trim" },
	{ 0x7db9fd3a, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0x3604b5df, "usb_string" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x5792f848, "strlcpy" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x6063ae8f, "atm_dev_register" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xea4805c2, "skb_queue_tail" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x61b90370, "__alloc_skb" },
	{ 0x2fc8b141, "usb_get_dev" },
	{ 0x871863c9, "usb_put_dev" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa975ccbd, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x817580e, "atm_dev_deregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6df1aaf1, "kernel_sigaction" },
	{ 0xc3a6e1c1, "crc32_be" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0x4ca9669f, "scnprintf" },
	{ 0x488a0ef1, "skb_dequeue" },
	{ 0x29361773, "complete" },
	{ 0x28318305, "snprintf" },
	{ 0x8f648a94, "param_ops_uint" },
	{ 0xf00b771e, "usb_free_urb" },
	{ 0xe26cf5e3, "usb_alloc_urb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=atm";


MODULE_INFO(srcversion, "D8EACBA47E67EFCB360A879");
MODULE_INFO(rhelversion, "8.0");
