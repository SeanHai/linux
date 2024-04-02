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
	{ 0xbca18818, "skb_queue_head" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xf5284f7e, "debugfs_create_dir" },
	{ 0xbecaf3ee, "debugfs_create_u8" },
	{ 0x6b3a6c0f, "__hci_cmd_sync" },
	{ 0x34584d81, "hci_register_dev" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0xb03676a8, "debugfs_create_file" },
	{ 0xe10f17e, "hci_unregister_dev" },
	{ 0x5d11132b, "debugfs_remove_recursive" },
	{ 0xeb81585a, "kthread_create_on_node" },
	{ 0x47022514, "bt_err" },
	{ 0xffe34842, "debugfs_create_x16" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x7d88731e, "kstrtol_from_user" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xf71e8617, "skb_queue_purge" },
	{ 0x2105444b, "default_llseek" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xf7d6636f, "current_task" },
	{ 0xc2e1f262, "kthread_stop" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xf3ff96ef, "hci_alloc_dev" },
	{ 0x5def83f9, "skb_push" },
	{ 0x9a910d01, "simple_open" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xea4805c2, "skb_queue_tail" },
	{ 0x61b90370, "__alloc_skb" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa975ccbd, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x488a0ef1, "skb_dequeue" },
	{ 0x28318305, "snprintf" },
	{ 0x962eeb53, "hci_free_dev" },
	{ 0xeb4b9a49, "skb_put" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bluetooth";


MODULE_INFO(srcversion, "7F1FC12511476C0DEC969BE");
MODULE_INFO(rhelversion, "8.0");
