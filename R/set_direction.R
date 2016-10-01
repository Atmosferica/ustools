# Code written by Chiara De Falco, Stefano Mandelli, Anna Napoli and Eugenio Thieme.
# For bug segnalation please use https://github.com/Atmosferica/ustools or
# eugen@thieme.it

###################################################################################


#*****************************************************************************
# Method for setting the slot corresponding to direction of wind
#*****************************************************************************

setGeneric('set_direction', function(object){
  standardGeneric('set_direction')
})

setMethod('set_direction', signature='turbulence',
	function(object){
	  x_vel <- object@u
	  y_vel <- object@v
	  dir <- c(1:length(x_vel))
	  dir <- atan2(-x_vel,-y_vel) # direction of wind from the North: I'm not sure, MUST CHECK!!!
	  object@dir <- dir*(180/pi)
	  index <- which(object@dir < 0)
	  object@dir[index] <- object@dir[index] +360
	  return(object)
})
