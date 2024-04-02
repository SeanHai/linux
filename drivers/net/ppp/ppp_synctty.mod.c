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
	{ 0xa120d33c, "tty_unregister_ldisc" },
	{ 0x51526d35, "tty_register_ldisc" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xf71e8617, "skb_queue_purge" },
	{ 0xccf1691f, "ppp_unregister_channel" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x9eab8d85, "_raw_write_lock_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x501a51d7, "ppp_register_channel" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x955c2e4e, "skb_pull" },
	{ 0x5def83f9, "skb_push" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x69acdf38, "memcpy" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0xf424480c, "tty_unthrottle" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xea4805c2, "skb_queue_tail" },
	{ 0x5b5a9263, "skb_trim" },
	{ 0x7db9fd3a, "__netdev_alloc_skb" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x27e1a049, "printk" },
	{ 0xcdea69c8, "tty_mode_ioctl" },
	{ 0x9a70d9ae, "ppp_channel_index" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x6bd461c1, "n_tty_ioctl_helper" },
	{ 0x8e730c70, "ppp_unit_number" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0x6727c407, "ppp_output_wakeup" },
	{ 0xf54365e9, "ppp_input" },
	{ 0x809d49fe, "ppp_input_error" },
	{ 0x488a0ef1, "skb_dequeue" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0x509f625d, "consume_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x963dcba1, "_raw_spin_trylock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x29361773, "complete" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ppp_generic";


MODULE_INFO(srcversion, "E07770511037288B2309502");
MODULE_INFO(rhelversion, "8.0");
