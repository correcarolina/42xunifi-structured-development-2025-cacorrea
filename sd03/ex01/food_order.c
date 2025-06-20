/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   food_order.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacorrea <cacorrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 10:14:55 by cacorrea          #+#    #+#             */
/*   Updated: 2025/06/13 10:50:25 by cacorrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "food_order.h"

int process_food_order(struct OrderRequest *request)
{
	int							status = -1;
	struct OrderConfirmation	*confirmed = NULL;

	status = check_restaurant_status(request);
	if (status == 1)
		confirmed = create_standard_confirmation();
	else if (status == 0)
		confirmed = create_preorder_confirmation();
	if (confirmed)
	{ 
		send_confirmation_notification(confirmed);
		free(confirmed);
		return (0);
	}
	return (1);
}