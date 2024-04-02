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
	{ 0x28cde093, "no_llseek" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0xf49409b0, "misc_deregister" },
	{ 0x6bddef80, "misc_register" },
	{ 0xcdebca32, "hci_recv_frame" },
	{ 0x955c2e4e, "skb_pull" },
	{ 0x441c3b70, "_copy_from_iter_full" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x714889c4, "nonseekable_open" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x47022514, "bt_err" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x34584d81, "hci_register_dev" },
	{ 0xf3ff96ef, "hci_alloc_dev" },
	{ 0x61b90370, "__alloc_skb" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xbca18818, "skb_queue_head" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x488a0ef1, "skb_dequeue" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xea4805c2, "skb_queue_tail" },
	{ 0x5def83f9, "skb_push" },
	{ 0x37a0cba, "kfree" },
	{ 0x962eeb53, "hci_free_dev" },
	{ 0xe10f17e, "hci_unregister_dev" },
	{ 0x68f927fb, "cancel_delayed_work_sync" },
	{ 0xf71e8617, "skb_queue_purge" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bluetooth";


MODULE_INFO(srcversion, "05C02F81A4BE4E80D3E22B9");
MODULE_INFO(rhelversion, "8.0");
