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
	{ 0x317a8ad6, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x402b8281, "__request_module" },
	{ 0x4c89f920, "cdev_del" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x6a8db397, "cdev_init" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xf9a482f9, "msleep" },
	{ 0xea2b701b, "up_read" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0xfa5223cc, "del_timer" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x25170ad2, "down_interruptible" },
	{ 0xad27f361, "__warn_printk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x5e87e75, "device_destroy" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x999e8297, "vfree" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0xeb81585a, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4bea39f, "__dynamic_netdev_dbg" },
	{ 0x91185511, "down_read" },
	{ 0x44b5ee9a, "kasprintf" },
	{ 0x7db9fd3a, "__netdev_alloc_skb" },
	{ 0xabd938ef, "netif_rx" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x2105444b, "default_llseek" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xf7d6636f, "current_task" },
	{ 0x855a325a, "freezing_slow_path" },
	{ 0x4a928de6, "mutex_lock_interruptible" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0xc2e1f262, "kthread_stop" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x43d0701a, "free_netdev" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xdce6588d, "register_netdev" },
	{ 0x5a921311, "strncmp" },
	{ 0x5792f848, "strlcpy" },
	{ 0x5def83f9, "skb_push" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x6626afca, "down" },
	{ 0x85d45f4d, "noop_llseek" },
	{ 0x2df52479, "device_create" },
	{ 0x318f7969, "add_timer" },
	{ 0x955c2e4e, "skb_pull" },
	{ 0x2b26f667, "i2c_unregister_device" },
	{ 0x85142f62, "up_write" },
	{ 0x65baf559, "down_write" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x66d87d38, "symbol_put_addr" },
	{ 0xe5e29cae, "cdev_add" },
	{ 0x1eb76e2a, "module_put" },
	{ 0xc6cbbc89, "capable" },
	{ 0xe6478472, "_dev_info" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x12a38747, "usleep_range" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xec8b8e3e, "eth_header_parse" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x9599bf40, "alloc_netdev_mqs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0xa975ccbd, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a5386e3, "ether_setup" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x372e8e21, "eth_validate_addr" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xc3a6e1c1, "crc32_be" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0xcf2a6966, "up" },
	{ 0xa047947, "class_destroy" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x93f0703, "unregister_netdev" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x121da905, "queue_work_on" },
	{ 0x28318305, "snprintf" },
	{ 0x509f625d, "consume_skb" },
	{ 0xe3fffae9, "__x86_indirect_thunk_rbp" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0xce2ba1bd, "__class_create" },
	{ 0x62a67793, "i2c_new_device" },
	{ 0x684d881, "eth_header" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x85075cb1, "try_module_get" },
	{ 0x6c07d933, "add_uevent_var" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "B97D815873153E3A2A7F75A");
MODULE_INFO(rhelversion, "8.0");
